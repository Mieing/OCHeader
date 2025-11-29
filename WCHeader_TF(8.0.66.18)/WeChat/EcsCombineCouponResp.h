@class NSMutableArray;

@interface EcsCombineCouponResp : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *useCashCouponList;
@property (retain, nonatomic) NSMutableArray *usePlatformDiscountCouponList;

+ (void)initialize;

@end
