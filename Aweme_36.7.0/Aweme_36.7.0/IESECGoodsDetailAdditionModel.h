@class IESECGoodsChoosePanelModel, NSString, NSArray, IESECGoodsInstallmentModel, IESECGoodsServiceNewbeeModel, IESECGoodsDetailActivityModel, NSDictionary, IESECGoodsDetailCouponModel, IESECGoodsLogisticsModel, IESECGoodsBrandPromise, IESECGoodsLiveExclusiveModel;

@interface IESECGoodsDetailAdditionModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *services;
@property (retain, nonatomic) IESECGoodsBrandPromise *brandPromise;
@property (retain, nonatomic) IESECGoodsLogisticsModel *logistics;
@property (retain, nonatomic) IESECGoodsDetailCouponModel *coupons;
@property (retain, nonatomic) IESECGoodsDetailActivityModel *activity;
@property (retain, nonatomic) IESECGoodsInstallmentModel *installment;
@property (copy, nonatomic) NSArray *certifications;
@property (copy, nonatomic) NSArray *tags;
@property (copy, nonatomic) NSArray *labels;
@property (retain, nonatomic) IESECGoodsChoosePanelModel *choosePanel;
@property (retain, nonatomic) IESECGoodsServiceNewbeeModel *servicesNewbee;
@property (retain, nonatomic) IESECGoodsLiveExclusiveModel *liveExclusive;
@property (copy, nonatomic) NSString *extraLog;
@property (retain, nonatomic) NSDictionary *privilegeFirstArea;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)labelsJSONTransformer;
+ (id)tagsJSONTransformer;
+ (id)servicesJSONTransformer;
+ (id)certificationsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)hasCoupon;
- (BOOL)hasDiscount;
- (BOOL)hasCouponComponent;
- (BOOL)hasShopDiscount;
- (id)tagMap;
- (BOOL)hasBannerActivity;
- (void).cxx_destruct;
- (BOOL)hasService;

@end
