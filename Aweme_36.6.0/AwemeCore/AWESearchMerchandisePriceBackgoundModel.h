@class AWEURLModel;

@interface AWESearchMerchandisePriceBackgoundModel : AWEBaseApiModel

@property (retain, nonatomic) AWEURLModel *backgroundImage;
@property (retain, nonatomic) AWEURLModel *iconSingleColumn;
@property (retain, nonatomic) AWEURLModel *iconDoubleColumn;

+ (id)backgroundImageJsonTransformer;
+ (id)iconSingleColumnJsonTransformer;
+ (id)iconDoubleColumnJsonTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
