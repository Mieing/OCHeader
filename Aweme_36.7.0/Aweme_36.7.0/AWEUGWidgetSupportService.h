@class NSString;

@interface AWEUGWidgetSupportService : HTSService <AWEUGWidgetSupportService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showAddWidgetGuideViewWithWidgetKey:(id)a0 container:(id)a1 delegate:(id)a2 extraImageURLs:(id)a3 from:(long long)a4;
- (void)showAddWidgetGuideViewWithWidgetKey:(id)a0 container:(id)a1 delegate:(id)a2 extraImageURLs:(id)a3 from:(long long)a4 trackParams:(id)a5;
- (void)showAddWidgetGuideViewWithWidgetKey:(id)a0 container:(id)a1 useMask:(BOOL)a2 delegate:(id)a3 extraImageURLs:(id)a4 from:(long long)a5 trackParams:(id)a6;
- (void)createWidgetGuideViewWithWidgetKey:(id)a0 delegate:(id)a1 extraImageURLs:(id)a2 from:(long long)a3 completion:(id /* block */)a4;
- (void)createWidgetGuideViewWithWidgetKey:(id)a0 delegate:(id)a1 extraImageURLs:(id)a2 from:(long long)a3 trackParams:(id)a4 completion:(id /* block */)a5;
- (void)refreshWidgetGuideViewLayout:(long long)a0;
- (void)hideCurrentWidgetGuideView;
- (void)setReloadTimelineFlagWithKind:(id)a0;
- (void)registerWidgetKind:(id)a0 needRefreshType:(unsigned long long)a1;
- (void)setWidgetSettingWithValue:(id)a0 forKey:(id)a1;
- (id)getWidgetSettingsDictionary;

@end
