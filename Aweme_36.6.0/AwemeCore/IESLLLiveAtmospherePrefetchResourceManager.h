@class IESLLLivePurchaseAtmosphereView;

@interface IESLLLiveAtmospherePrefetchResourceManager : UIView

@property (retain, nonatomic) IESLLLivePurchaseAtmosphereView *rushAtmosphereView;

+ (void)prefetchAtmosphereResource;
+ (id)sharedInstance;

- (void)deallocRushAtmosphereView;
- (void).cxx_destruct;

@end
