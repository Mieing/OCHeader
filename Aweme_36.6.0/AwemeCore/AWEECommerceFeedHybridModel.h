@class NSDictionary, AWEAwemeModel;

@interface AWEECommerceFeedHybridModel : AWEBaseApiModel

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSDictionary *extra;

+ (id)awemeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
