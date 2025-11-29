@class NSMutableArray;

@interface EcsShopCouponReq : WXPBGeneratedMessage

@property (nonatomic) BOOL isUseCoupon;
@property (retain, nonatomic) NSMutableArray *userCouponIdList;

+ (void)initialize;

@end
