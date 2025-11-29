@interface AWECommerceCouponHelper : NSObject

+ (id)couponKeyString:(id)a0;
+ (BOOL)shouldFetchCouponWithModel:(id)a0;
+ (void)fetchCouponIfNeededWithModel:(id)a0 completionBlock:(id /* block */)a1;
+ (void)initialize;

@end
