@class NSString, IESECGoodsDetailLivingBanner;

@interface IESECGoodsDetailHalfStrandDataModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECGoodsDetailLivingBanner *livingBanner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
