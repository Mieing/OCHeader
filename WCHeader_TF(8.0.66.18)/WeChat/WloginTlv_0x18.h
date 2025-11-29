@interface WloginTlv_0x18 : WloginTlv

@property unsigned short wPingVer;
@property unsigned int dwSSOVer;
@property unsigned int dwAppID;
@property unsigned int dwAppClientVer;
@property unsigned int dwUin;
@property unsigned short wRedirectCount;
@property unsigned short wResvLen;

- (int)encode:(id)a0;

@end
