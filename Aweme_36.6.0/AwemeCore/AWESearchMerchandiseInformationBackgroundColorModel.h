@class NSString, AWESearchMerchandiseInformationBackgroundGradientColorModel;

@interface AWESearchMerchandiseInformationBackgroundColorModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *bgType;
@property (retain, nonatomic) AWESearchMerchandiseInformationBackgroundGradientColorModel *gradientColorModel;

+ (id)gradientColorModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
