@class NSString, BaseResponse;

@interface PayChargeProxyResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *respData;

+ (void)initialize;

@end
