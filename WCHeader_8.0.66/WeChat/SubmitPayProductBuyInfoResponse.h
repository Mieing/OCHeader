@class NSString, BaseResponse;

@interface SubmitPayProductBuyInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *reqKey;
@property (retain, nonatomic) NSString *appSource;
@property (nonatomic) int outerErrCode;
@property (retain, nonatomic) NSString *outerErrMsg;

+ (void)initialize;

@end
