@class NSString;

@interface WloginTlv_0x124 : WloginTlv

@property (copy) NSString *sOs;
@property (copy) NSString *sOsVer;
@property unsigned short wNetInfo;
@property (copy) NSString *sNetDetail;
@property (copy) NSString *sAddr;

- (int)encode:(id)a0;
- (void)dealloc;

@end
