/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edupless <edupless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:44:49 by edupless          #+#    #+#             */
/*   Updated: 2023/03/03 14:28:37 by edupless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

void	send_sig(int pid, char *str, int length);
void	get_str(int pid, char *str);
void	get_sig(int sig);

#endif
