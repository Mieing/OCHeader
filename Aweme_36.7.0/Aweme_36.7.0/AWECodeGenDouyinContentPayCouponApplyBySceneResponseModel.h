@class NSArray, AWECodeGenEnPurchasePackageInfoModel, AWECodeGenPopUpConfModel, NSString;

@interface AWECodeGenDouyinContentPayCouponApplyBySceneResponseModel : AWEBaseDataModel

@property (nonatomic) int applyStatus;
@property (copy, nonatomic) NSArray *applyCouponsModelArray;
@property (retain, nonatomic) AWECodeGenEnPurchasePackageInfoModel *purchasePackageInfoModel;
@property (retain, nonatomic) AWECodeGenPopUpConfModel *couponPopUpConfModel;
@property (nonatomic) int statusCode;
@property (copy, nonatomic) NSString *statusMsg;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
