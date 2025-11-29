@class NSString;

@interface AWEGrouponTransformerModuleService : HTSService <AWEGrouponTransformerModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createTransformerViewControllerWithPageContext:(id)a0;
- (id)createTransformerSettingsManangerWithPageContext:(id)a0;
- (void)handleByteSyncMsg:(id)a0;
- (void)getValidNearbySettingsCacheWithRowType:(unsigned long long)a0 pageType:(long long)a1 strategy:(long long)a2 complete:(id /* block */)a3;
- (void)getValidNearbySettingsCacheWithRowType:(unsigned long long)a0 pageType:(long long)a1 strategy:(long long)a2 expiredDuration:(double)a3 complete:(id /* block */)a4;
- (void)prefechTransformerGeckoResourceIfNeeded;

@end
