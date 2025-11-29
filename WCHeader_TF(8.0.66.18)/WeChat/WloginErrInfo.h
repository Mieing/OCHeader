@class NSString;

@interface WloginErrInfo : NSObject

@property unsigned short wErrorCode;
@property (copy) NSString *sErrorTitle;
@property (copy) NSString *sErrorMsg;
@property unsigned short wErrorAddType;
@property (copy) NSString *sErrorAdd;
@property (copy) NSString *sErrorUserAccount;

- (void)dealloc;

@end
