@class IESECGoodsDetailHeaderSliceModel, NSString, IESECGoodsDetailHeaderLynxModel, NSDictionary, IESECGoodsDetailHeaderPendantConfigModel;

@interface IESECGoodsDetailHeaderPendantModel : IESECBaseApiModel

@property (copy, nonatomic) NSString *pendantID;
@property (retain, nonatomic) IESECGoodsDetailHeaderSliceModel *slice;
@property (retain, nonatomic) IESECGoodsDetailHeaderLynxModel *lynx;
@property (copy, nonatomic) NSDictionary *native;
@property (retain, nonatomic) IESECGoodsDetailHeaderPendantConfigModel *config;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
