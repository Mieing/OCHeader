@interface AWEECDeepLinkTabKitPerfTiming : NSObject

@property (nonatomic) long long isShortLink;
@property (nonatomic) long long bootType;
@property (nonatomic) double bootTime;
@property (nonatomic) double taskStartTime;
@property (nonatomic) double getTabKitUrlStart;
@property (nonatomic) double getTabKitUrlEnd;
@property (nonatomic) double preloadGeckoStart;
@property (nonatomic) double preloadGeckoEnd;
@property (nonatomic) double prefetchApiStart;
@property (nonatomic) double prefetchApiEnd;
@property (nonatomic) double taskEndTime;

- (id)initWithShortLinkType:(BOOL)a0;
- (id)formatPerfTiming;

@end
