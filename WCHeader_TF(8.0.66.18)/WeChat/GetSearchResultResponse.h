@class NSString, BaseResponse;

@interface GetSearchResultResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *json;

+ (void)initialize;

@end
