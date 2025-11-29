@class NSString, BaseResponse;

@interface WebCommPrefetchResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *respStr;

+ (void)initialize;

@end
