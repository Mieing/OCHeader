@class NSString, BaseResponse;

@interface SearchGameListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *jsonData;

+ (void)initialize;

@end
