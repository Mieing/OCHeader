@class NSString, AWESearchMerchandiseBackgroundGradientColorModel;

@interface AWESearchMerchandiseBackgroundColorModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *bgType;
@property (retain, nonatomic) AWESearchMerchandiseBackgroundGradientColorModel *gradientColorModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
