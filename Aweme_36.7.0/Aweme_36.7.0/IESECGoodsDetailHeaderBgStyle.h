@class IESECGoodsDetailHeaderContainerBgImage, IESECGoodsDetailHeaderContainerBgEffectConfig;

@interface IESECGoodsDetailHeaderBgStyle : IESECBaseApiModel

@property (retain, nonatomic) IESECGoodsDetailHeaderContainerBgImage *image;
@property (retain, nonatomic) IESECGoodsDetailHeaderContainerBgEffectConfig *effectConfig;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
