@class NSMutableDictionary;

@interface AWESearchLifeCouponFetchManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *couponDataMapDic;

+ (id)sharedInstance;

- (BOOL)enableCouponFetch;
- (BOOL)enableFetchForEnterFrom:(id)a0;
- (void)updateCouponDataIfNeededWithEnterFrom:(id)a0;
- (id)getCouponStringWithEnterFrom:(id)a0;
- (void).cxx_destruct;

@end
