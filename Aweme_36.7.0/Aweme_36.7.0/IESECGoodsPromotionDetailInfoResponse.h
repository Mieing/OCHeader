@class NSString, IESECGoodsDetailDetailModel;

@interface IESECGoodsPromotionDetailInfoResponse : IESECBaseApiModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECGoodsDetailDetailModel *detail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
