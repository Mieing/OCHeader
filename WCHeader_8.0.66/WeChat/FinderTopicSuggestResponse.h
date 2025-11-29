@class NSMutableArray, BaseResponse;

@interface FinderTopicSuggestResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *suggestions;

+ (void)initialize;

@end
