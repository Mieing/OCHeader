@class NSString, BaseResponse;

@interface ConfigResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *json;

+ (void)initialize;

@end
