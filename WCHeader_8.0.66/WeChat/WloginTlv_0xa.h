@class NSString;

@interface WloginTlv_0xa : WloginTlv

@property (nonatomic) unsigned short wErrorVer;
@property (nonatomic) unsigned short wErrorCode;
@property (copy) NSString *sErrorInfo;

- (int)decode:(char **)a0 andBuffLen:(int *)a1;
- (void)dealloc;

@end
