@class NSString, MemSig, WloginProtocol;

@interface WTLoginApi : NSObject {
    NSString *_UserAccount;
    unsigned long long _uin;
    unsigned int _dwBitmap;
    unsigned int _loginFlag;
    unsigned int _dwAppid;
    unsigned int _dwSubAppid;
    BOOL _hasNewTGTGT;
    MemSig *_TGTGT;
    WloginProtocol *_wloginProtocol;
}

- (id)init;
- (void)dealloc;
- (int)loginWithPasswd:(unsigned long long)a0 andPasswd:(id)a1 andSigBitmap:(unsigned int)a2 andLoginFlag:(int)a3 retData:(id)a4;
- (int)checkPicture:(id)a0 retData:(id)a1;
- (int)refreshPicture:(id)a0;
- (int)exchangeSig:(unsigned long long)a0 andSig:(id)a1 andSigBitmap:(unsigned int)a2 retData:(id)a3;
- (struct { int x0; int x1; id x2; id x3; id x4; id x5; id x6; } *)resolveSvrPkg:(id)a0;
- (BOOL)hasPwdSig:(unsigned long long)a0;
- (void)clearPwdSig:(unsigned long long)a0;
- (id)initMemUserAppidSig;
- (void)setClientPicInfo:(unsigned short)a0 CapType:(unsigned char)a1 PicRetType:(unsigned char)a2;
- (id)sigTypeToName:(unsigned int)a0;
- (void)resetLoginProcess;

@end
