@class NSString, NSArray, AWECodeGenPopUpConfModel, AWECodeGenApplyCouponInfoModel;

@interface AWECodeGenDouyinContentPayCouponApplyResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSString *contentID;
@property (copy, nonatomic) NSString *productID;
@property (nonatomic) unsigned long long timing;
@property (nonatomic, getter=hasShown) BOOL shown;
@property (copy, nonatomic) NSString *containerID;
@property (nonatomic) int applyStatus;
@property (retain, nonatomic) AWECodeGenApplyCouponInfoModel *applyCouponModel;
@property (copy, nonatomic) NSArray *applyCouponsModelArray;
@property (nonatomic) long long showPopupMinDiscountAmountFen;
@property (retain, nonatomic) AWECodeGenPopUpConfModel *couponPopUpConfModel;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
