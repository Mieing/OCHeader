@class NSString, NSData;

@interface WloginTlv_0x2 : WloginTlv

@property (nonatomic) unsigned short wPicSigVer;
@property (copy) NSString *sCode;
@property (retain) NSData *acEncryptKey;

- (int)encode:(id)a0;
- (void)dealloc;

@end
