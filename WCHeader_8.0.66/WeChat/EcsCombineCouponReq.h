@class NSMutableArray;

@interface EcsCombineCouponReq : WXPBGeneratedMessage

@property (nonatomic) BOOL isUseCashCoupon;
@property (retain, nonatomic) NSMutableArray *userCashCouponIdList;
@property (nonatomic) BOOL isUsePlatformDiscountCoupon;
@property (retain, nonatomic) NSMutableArray *usePlatformDiscountCouponIdList;

+ (void)initialize;

@end
