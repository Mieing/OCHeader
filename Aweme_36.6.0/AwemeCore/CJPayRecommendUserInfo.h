@class CJPayDyPayPromotionVoucherInfo, NSString, CJPayAppUserInfo;

@interface CJPayRecommendUserInfo : JSONModel

@property (retain, nonatomic) CJPayAppUserInfo *appUserInfo;
@property (retain, nonatomic) CJPayDyPayPromotionVoucherInfo *promotionVoucherInfo;
@property (copy, nonatomic) NSString *recommendType;
@property (copy, nonatomic) NSString *recommendMsg;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSString *buttonAction;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
