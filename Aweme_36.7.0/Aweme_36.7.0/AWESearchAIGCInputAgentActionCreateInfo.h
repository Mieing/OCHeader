@class NSString, NSArray;

@interface AWESearchAIGCInputAgentActionCreateInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *panelTitle;
@property (copy, nonatomic) NSArray *genreList;

+ (id)genreListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
