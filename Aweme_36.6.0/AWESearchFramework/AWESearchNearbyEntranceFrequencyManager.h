@interface AWESearchNearbyEntranceFrequencyManager : NSObject

@property (nonatomic) BOOL canShowCouponTag;

+ (double)searchRefreshTimeLimit;
+ (double)groupBuySearchRefreshTimeLimit;
+ (BOOL)enableSearchRefreshTimeLimit;
+ (id)sharedInstance;

@end
