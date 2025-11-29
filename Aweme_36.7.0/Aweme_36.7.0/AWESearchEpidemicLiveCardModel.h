@class NSArray;

@interface AWESearchEpidemicLiveCardModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *roomInfoArray;

+ (id)roomInfoArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
