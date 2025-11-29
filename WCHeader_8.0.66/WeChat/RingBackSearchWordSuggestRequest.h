@class BaseRequest, NSString;

@interface RingBackSearchWordSuggestRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *word;

+ (void)initialize;

@end
