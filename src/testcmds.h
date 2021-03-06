
/* testcmds.c - FTP cmd list */

const char *testcmds[] = {
        "ABOR" ,
        "NOOP" ,
        "ALLO" ,        
        "ALLO 42" ,
        "ALLO -42" ,        
        "SYST" ,
        "PORT" ,        
        "PORT 1,2,3,4,5,6" ,
        "PORT -1,-2,-3,-4,-5,-6" ,        
        "EPRT" ,
        "EPRT |1|2.3.4.5|6|" ,
        "EPRT |-1|-2.-3.-4.-5|-6|" ,        
        "PASV" ,
        "PASV 42" ,
        "EPSV" ,
        "EPSV 42" ,        
        "SPSV" ,
        "PWD" ,
        "XPWD" ,
        "CWD" ,        
        "CWD /" ,
        "XCWD /" ,
        "CWD ~/" ,
        "XCWD ~/" ,
        "CDUP" ,
        "XCUP" ,
        "RETR" ,
        "RETR /" ,
        "RETR ." ,
        "REST" ,
        "REST 0" ,        
        "REST 42" ,
        "REST -42" ,        
        "DELE" ,
        "DELE /" ,
        "DELE ~/" ,
        "STOR" ,
        "STOR /" ,
        "STOR ~/" ,
        "APPE" ,
        "APPE /" ,
        "APPE ~/" ,
        "STOU" ,
        "STOU /" ,
        "STOU ~/" ,
        "MKD" ,
        "MKD /" ,
        "MKD ~/" ,
        "XMKD" ,
        "XMKD /" ,
        "RMD" ,
        "RMD /" ,
        "MMD ~/" ,
        "XRMD" ,
        "XRMD /" ,
#if 0
        "LIST" ,
        "LIST ." ,
        "LIST /" ,
        "LIST ~/" ,        
        "LIST *" ,                
        "LIST ./*/*" ,
        "LIST -l" ,
        "LIST -l *" ,        
        "LIST" ,
        "NLST ." ,
        "NLST /" ,
        "NLST ~/" ,        
        "NLST *" ,                
        "NLST ./*/*" ,
        "NLST -l" ,
        "NLST -l *" ,
#endif
        "TYPE" ,
        "TYPE ?" ,        
        "TYPE Z" ,                
        "TYPE A" ,                        
        "TYPE I" ,
        "MODE" ,
        "MODE ?" ,        
        "MODE S" ,                
        "STRU" ,
        "STRU ?" ,        
        "STRU S" ,                
        "XDBG" ,
        "XDBG 1" ,        
        "MDTM" ,
        "MDTM ." ,
        "MDTM /" ,
        "MDTM ~/" ,        
        "MDTM *" ,                
        "MDTM ./*/*" ,
        "MDTM __abc__" ,        
        "SIZE" ,
        "SIZE ." ,
        "SIZE /" ,
        "SIZE ~/" ,        
        "SIZE *" ,                
        "SIZE ./*/*" ,
        "SIZE __abc__" ,        
        "RNFR" ,
        "RNFR ." ,        
        "RNFR ~/" ,        
        "RNFR *" ,                
        "RNFR ./*/*" ,
        "RNFR __abc__" ,
        "RNFR /" ,        
        "RNTO" ,
        "RNTO ." ,        
        "RNTO ~/" ,        
        "RNTO *" ,                
        "RNTO ./*/*" ,
        "RNTO __abc__" ,
        "RNTO /" ,        
        "STAT" ,
        "STAT ." ,        
        "STAT ~/" ,        
        "STAT *" ,                
        "STAT ./*/*" ,
        "STAT __abc__" ,
        "STAT /" ,
        "MLST" ,
        "MLST ." ,        
        "MLST ~/" ,        
        "MLST *" ,                
        "MLST ./*/*" ,
        "MLST __abc__" ,
        "MLST /" ,
#if 0
        "MLSD" ,        
        "MLSD ." ,        
        "MLSD ~/" ,        
        "MLSD *" ,                
        "MLSD ./*/*" ,
        "MLSD __abc__" ,
        "MLSD /" ,
#endif
        "FEAT" ,
        "FEAT 42" ,
        "SITE" ,
        "SITE HELP" ,
        "SITE HELP RETR" ,
        "SITE IDLE" ,
        "SITE IDLE -1" ,
        "SITE IDLE 42" ,
        "SITE IDLE 424242" ,
        "SITE CHMOD" ,
        "SITE CHMOD -1" ,
        "SITE CHMOD 0" ,
        "SITE CHMOD 42" ,
        "SITE CHMOD __abc__" ,
        "SITE CHMOD -1 __abc__" ,
        "SITE CHMOD 0 __abc__" ,
        "SITE CHMOD 42 __abc__" ,
        "SITE CHMOD *" ,
        "SITE CHMOD -1 *" ,
        "SITE CHMOD 0 *" ,
        "SITE CHMOD 42 *" ,
        "SITE CHMOD -R *" ,
        "SITE CHMOD -R -1 *" ,
        "SITE CHMOD -R 0 *" ,
        "SITE CHMOD -R 42 ." ,
        "SITE CHMOD -R ." ,
        "SITE CHMOD -R -1 ." ,
        "SITE CHMOD -R 0 ." ,
        "SITE CHMOD -R 42 ." ,        
        "HELP SITE",
				"HELP RETR" ,
				"ESTP",
				"ESTA",
				"AUTH", /* RFC 2228 */
				"ADAT", /* RFC 2228 */
				"MIC", /* RFC 2228 */
};

static const char *long_output_cmds[] = {"HELP"};
