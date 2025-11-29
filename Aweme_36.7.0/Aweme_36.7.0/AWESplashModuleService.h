@class NSString, NSMutableDictionary;

@interface AWESplashModuleService : HTSService <AWESplashModuleService>

@property (retain, nonatomic) NSMutableDictionary *brandSafetyDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableAdSplash;
- (BOOL)checkIsInLivePeriod:(id)a0;
- (long long)topviewMaxCacheSize;
- (id)getBrandSafetyDataWithItemId:(id)a0;
- (void)removeBrandSafetyDataWithItemId:(id)a0;
- (void)storeBrandSafetyDataWithItemId:(id)a0 data:(id)a1;
- (void)splashActionWithModel:(id)a0;
- (void)trackWithTag:(id)a0 label:(id)a1 value:(id)a2 extra:(id)a3;
- (void)openURLSuccessfullyWithURL:(id)a0 adID:(id)a1 extra:(id)a2 model:(id)a3 complete:(id /* block */)a4;
- (BOOL)openURLInApp:(id)a0;
- (void)openURL:(id)a0 adID:(id)a1 extra:(id)a2 model:(id)a3 complete:(id /* block */)a4;
- (void).cxx_destruct;

@end
