@class NSArray;

@interface AWEFeedSearchLongBarWords : AWEBaseApiModel

@property (retain, nonatomic) NSArray *words;

+ (id)wordsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
