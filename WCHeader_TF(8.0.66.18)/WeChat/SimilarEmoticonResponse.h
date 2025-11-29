@class NSString, BaseResponse;

@interface SimilarEmoticonResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *json;

+ (void)initialize;

@end
