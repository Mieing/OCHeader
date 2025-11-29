@class NSString, NSData;

@interface WloginTlv_0x128 : WloginTlv

@property unsigned short wVer;
@property unsigned char cNewInstall;
@property unsigned char cReadGuid;
@property unsigned char cGuidChg;
@property unsigned char cGUIDSrc;
@property unsigned char cReadFailFlag;
@property unsigned char cDevChgFlag;
@property unsigned char cResvFlag;
@property (copy) NSString *deviceType;
@property (retain) NSData *guid;

- (int)encode:(id)a0;
- (void)dealloc;

@end
