@class NSDictionary, IESECLiveCouponModel;

@interface IESECLiveGoodsListApplyResp : IESECLiveApiBaseModel

@property (retain, nonatomic) IESECLiveCouponModel *couponMeta;
@property (retain, nonatomic) NSDictionary *originDic;

+ (id)couponMetaJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
