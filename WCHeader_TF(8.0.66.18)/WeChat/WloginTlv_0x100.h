@interface WloginTlv_0x100 : WloginTlv

@property (nonatomic) unsigned short wDBBufVer;
@property (nonatomic) unsigned int dwSSOVer;
@property (nonatomic) unsigned int dwAppID;
@property (nonatomic) unsigned int dwSubAppID;
@property (nonatomic) unsigned int dwAppClientVer;
@property (nonatomic) unsigned int dwGetSig;

- (int)encode:(id)a0;

@end
