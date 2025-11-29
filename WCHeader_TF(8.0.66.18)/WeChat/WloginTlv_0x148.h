@class NSString;

@interface WloginTlv_0x148 : WloginTlv

@property (copy) NSString *sAppName;
@property unsigned int dwSSOVer;
@property unsigned int dwAppId;
@property unsigned int dwSubAppId;
@property (copy) NSString *sAppVer;
@property (copy) NSString *sAppSig;

- (int)encode:(id)a0;
- (void)dealloc;

@end
