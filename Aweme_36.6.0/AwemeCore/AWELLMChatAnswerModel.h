@class NSString, NSArray;

@interface AWELLMChatAnswerModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSArray *keywords;

+ (id)keywordsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
