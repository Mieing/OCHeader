@class AWEURLModel;

@interface AWESearchMerchandisePriceAreaInfo : AWEBaseApiModel

@property (retain, nonatomic) AWEURLModel *backgroundImage;
@property (retain, nonatomic) AWEURLModel *icon;

+ (id)iconJsonTransformer;
+ (id)backgroundImageJsonTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
