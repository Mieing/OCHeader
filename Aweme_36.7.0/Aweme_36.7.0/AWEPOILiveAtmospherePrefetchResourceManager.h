@class AWEPOILivePurchaseAtmosphereView;

@interface AWEPOILiveAtmospherePrefetchResourceManager : UIView

@property (retain, nonatomic) AWEPOILivePurchaseAtmosphereView *rushAtmosphereView;

+ (void)prefetchAtmosphereResource;
+ (id)sharedInstance;

- (void)deallocRushAtmosphereView;
- (void).cxx_destruct;

@end
