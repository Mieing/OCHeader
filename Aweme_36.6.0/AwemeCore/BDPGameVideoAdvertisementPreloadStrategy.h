@class BDPGameVideoAdPreloadConfig, BDPThreadSafeArray;

@interface BDPGameVideoAdvertisementPreloadStrategy : NSObject

@property (retain, nonatomic) BDPGameVideoAdPreloadConfig *adPreloadConfig;
@property (retain, nonatomic) BDPThreadSafeArray *intervalBetweenAdArr;

+ (id)gameAdPreloadConfig;

- (void)initSettings;
- (void)operateAdLoad:(id)a0 video:(id)a1;
- (void)operateAdShow:(id)a0 video:(id)a1;
- (void)operateAdHide:(id)a0 adUnitID:(id)a1;
- (long long)hitStrategyOne:(id)a0;
- (void)preloadAd:(id)a0 hitStrategy:(long long)a1 adUnitID:(id)a2;
- (id)strategyCodeToMessage:(long long)a0;
- (id)getLoadToShowTimeArr:(id)a0;
- (id)loadToShowTimeKey:(id)a0;
- (id)getLoadToShowCountArr:(id)a0;
- (id)loadToShowCountKey:(id)a0;
- (long long)hitStrategyTwo:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
