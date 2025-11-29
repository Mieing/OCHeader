@class NSString, NSMutableArray, BaseResponse;

@interface RingBackSearchWordSuggestResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *infos;
@property (retain, nonatomic) NSString *word;

+ (void)initialize;

@end
