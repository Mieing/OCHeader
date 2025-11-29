@class IESECGoodsDetailHeaderBgStyle;

@interface IESECGoodsDetailHeaderContainerConfig : IESECBaseApiModel

@property (nonatomic) unsigned long long containerStyle;
@property (retain, nonatomic) IESECGoodsDetailHeaderBgStyle *bgStyle;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
