static int
arch_set_error(struct tcb *tcp)
{
	hppa_r28 = -tcp->u_error;
	return upoke(tcp->pid, PT_GR28, hppa_r28);
}
