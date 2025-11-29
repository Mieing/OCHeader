@class AWESearchMerchandiseLightDarkGradientColorModel;

@interface AWESearchMerchandiseInformationBackgroundGradientColorModel : AWEBaseApiModel

@property (retain, nonatomic) AWESearchMerchandiseLightDarkGradientColorModel *lightGradientColorModel;
@property (retain, nonatomic) AWESearchMerchandiseLightDarkGradientColorModel *darkGradientColorModel;

+ (id)lightGradientColorModelJSONTransformer;
+ (id)darkGradientColorModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
