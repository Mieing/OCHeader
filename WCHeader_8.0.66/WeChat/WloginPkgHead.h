@class NSString;

@interface WloginPkgHead : NSObject <WloginProtocolBuff> {
    struct { unsigned short wVersion; unsigned short wCommand; unsigned short wSeq_num; unsigned int dwUin; unsigned char cExtVer; unsigned char cCmdVer; unsigned char cRetryTimes; unsigned int dwClientType; unsigned int dwPubNo; unsigned int dwInstanceID; } stClientPkgHead;
    struct { unsigned short wVersion; unsigned short wCommand; unsigned short wSeq_num; unsigned int dwUin; unsigned short wFlag; unsigned char cRetryTimes; } stServerPkgHead;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithVer:(unsigned short)a0 andPubNo:(unsigned int)a1 andClientType:(unsigned int)a2;
- (BOOL)resetHead;
- (int)decode:(char **)a0 andBuffLen:(int *)a1;
- (int)encode:(id)a0;
- (void)setPkgUin:(unsigned int)a0;
- (unsigned int)pkgUin;
- (void)setPkgCmd:(unsigned short)a0;
- (unsigned short)pkgCmd;

@end
