/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaccary <smaccary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 17:45:16 by smaccary          #+#    #+#             */
/*   Updated: 2020/07/31 17:45:16 by smaccary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MLX_H
# define MLX_H

void    *mlx_init(void);
void    *mlx_new_image(void *mlx_ptr, int width, int height);
char	*mlx_get_data_addr(void *img_ptr, int *bits_per_pixel,
							int *size_line, int *endian);
int     mlx_put_image_to_window(void *mlx_ptr, void *win_ptr, void *img_ptr,
								int x, int y);
int		mlx_destroy_image(void *mlx_ptr, void *img_ptr);
																	
void    *mlx_new_window(void *mlx_ptr, int size_x, int size_y, char *title);
int		mlx_destroy_window(void *mlx_ptr, void *win_ptr);

int		mlx_key_hook (void *win_ptr, int (*funct_ptr)(), void *param);
int	    mlx_hook(void *win_ptr, int x_event, int x_mask,
					int (*funct)(), void *param);
int	    mlx_loop_hook (void *mlx_ptr, int (*funct_ptr)(), void *param);
int	    mlx_loop (void *mlx_ptr);

void    *mlx_xpm_file_to_image(void *mlx_ptr, char *filename, int *width, int *height);

#endif