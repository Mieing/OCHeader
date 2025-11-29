@class AWEAwemeModel;

@interface AFDAwemeFamiliarGroupItemModel : AWEBaseApiModel

@property (retain, nonatomic) AWEAwemeModel *aweme;

+ (id)awemeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
