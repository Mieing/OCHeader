@class AWESearchMerchandiseGradientColorModel;

@interface AWESearchMerchandiseBackgroundGradientColorModel : AWEBaseApiModel

@property (retain, nonatomic) AWESearchMerchandiseGradientColorModel *lightGradientColorModel;
@property (retain, nonatomic) AWESearchMerchandiseGradientColorModel *darkGradientColorModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
