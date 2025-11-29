@class NSString;

@interface AWEShareMixVideoService : AWEShareCommonImpl <AWEShareMixVideo>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showPanelWithMixVideo:(id)a0 previousPage:(id)a1 pageType:(id)a2 currentVideo:(id)a3 onViewController:(id)a4;
- (void)showPanelWithMixVideo:(id)a0 previousPage:(id)a1 pageType:(id)a2 currentVideo:(id)a3 onViewController:(id)a4 logExtraDict:(id)a5;
- (void)showPanelWithMixVideo:(id)a0 sceneType:(long long)a1 previousPage:(id)a2 pageType:(id)a3 currentVideo:(id)a4 onViewController:(id)a5 logExtraDict:(id)a6;
- (id)contextFromMixVideo:(id)a0 pageType:(id)a1;
- (id)statsSharePlaylistGameStage:(id)a0;
- (id)statsShareMixVideoStage;

@end
