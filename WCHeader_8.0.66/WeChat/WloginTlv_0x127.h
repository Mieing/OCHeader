@class NSData, NSString;

@interface WloginTlv_0x127 : WloginTlv

@property unsigned short wVer;
@property (retain) NSData *randData;
@property (copy) NSString *msgCode;

- (int)encode:(id)a0;
- (void)dealloc;

@end
