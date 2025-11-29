@class NSString;

@interface WloginTlv_0x147 : WloginTlv

@property unsigned int dwAppVerID;
@property unsigned short wAppVerLen;
@property (copy) NSString *sAppVer;
@property unsigned short wAppSigLen;
@property (copy) NSString *sAppSig;

- (int)encode:(id)a0;
- (void)dealloc;

@end
