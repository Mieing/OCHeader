@class NSString;

@interface IESScreenCastAdapterAdapterImpl : IESLiveBaseAdapter <IESScreenCastAdapterAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updatePendantVisibility:(BOOL)a0 forScene:(id)a1 subScene:(id)a2;
- (id)trackerInterceptor;
- (BOOL)enableCastControlUIV2;
- (void)registerCastControlViewSettingClass:(id)a0;
- (void)updateCastScenario:(id)a0 scenario:(long long)a1;
- (id)airPlayContentView;
- (id)airPlayDanmakuContainerView;
- (void)showPendantIfNecessaryFor:(id)a0;
- (BOOL)isLivePendantEnabled;
- (id)observe:(id)a0 add:(id /* block */)a1 remove:(id)a2;
- (id)targetInstance;

@end
