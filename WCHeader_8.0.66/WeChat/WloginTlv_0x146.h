@class NSString;

@interface WloginTlv_0x146 : WloginTlv

@property unsigned short wErrorVer;
@property unsigned short wErrorCode;
@property (copy) NSString *sErrorTitle;
@property (copy) NSString *sErrorMsg;
@property unsigned short wErrorInfoType;
@property (copy) NSString *sErrorInfo;

- (int)decode:(char **)a0 andBuffLen:(int *)a1;
- (void)dealloc;

@end
