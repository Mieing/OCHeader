@class WloginPkgHead, NSArray, NSMutableDictionary, WloginUserInfo, NSData, WloginErrInfo;

@interface WloginProtocol : NSObject {
    WloginPkgHead *pkgHead;
    NSMutableDictionary *basicInfoTlvList;
    unsigned int dwSrcSigAppid;
    unsigned int dwSrcSigSubAppid;
    unsigned int dwDstSigAppid;
    unsigned int dwDstSigSubAppid;
    char sKey[16];
    char A1_Key[16];
    struct { int localRet; int svrRet; NSData *passwdSig; NSArray *sigArray; WloginUserInfo *userInfo; WloginErrInfo *errInfo; NSData *pictureData; } stRetValue;
}

@property (readonly) NSMutableDictionary *reslutSigTlvList;

- (id)initWithClientVer:(unsigned short)a0 andPubNo:(unsigned int)a1 andClientType:(unsigned int)a2;
- (BOOL)resetProtocol;
- (void)dealloc;
- (int)loginWithPasswd:(id)a0 retData:(id)a1;
- (int)checkPic:(id)a0;
- (int)refreshPic:(id)a0;
- (int)exchangeSig:(id)a0 retData:(id)a1;
- (void)recvPkgError;
- (struct { int x0; int x1; id x2; id x3; id x4; id x5; id x6; } *)resolveSvrPkg:(id)a0;
- (BOOL)addBasicTlv:(id)a0;
- (id)basicTlvByTag:(unsigned short)a0;
- (id)sigTlvDictByTag:(unsigned short)a0;
- (BOOL)decodeTlvList:(const char *)a0 andLeftLen:(int *)a1;
- (void)setSrcAppid:(unsigned int)a0 andSrcSubAppid:(unsigned int)a1 andDstAppid:(unsigned int)a2 andDstSubAppid:(unsigned int)a3;
- (BOOL)genTGTGTbyPasswd:(const char *)a0 andUin:(unsigned int)a1 andFlag:(int)a2 outTGTGT:(id)a3;
- (BOOL)genEncryptBody_0x144:(id)a0 subCmd:(unsigned short)a1;
- (void)setPkgHeadUin:(unsigned int)a0;
- (unsigned int)pkgHeadUin;

@end
