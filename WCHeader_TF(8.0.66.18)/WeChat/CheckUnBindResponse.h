@class NSString, BaseResponse;

@interface CheckUnBindResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *randomPasswd;
@property (retain, nonatomic) NSString *canUnbindNotice;

+ (void)initialize;

@end
