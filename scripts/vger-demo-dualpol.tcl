# vger-demo-dualpol.tcl
# runpacketsend-dx-vger-dualpol.tcsh -> dx1000

act set type iftest
act set watchdogs off

sched set dxtune user
sched set beam1 on
sched set beam2 off
sched set beam3 off

dx set basewarn off
dx set baseerror off

dx set baseinitaccum 20
dx set baserep 20
dx load chan 0 dx1000
dx load skyfreq 8419.530000000 dx1000
dx load chan 0 dx1000
dx set datareqsubchan 406
dx set length 94

exec runpacketsend-dx-vger-dualpol.tcsh &
start obs
