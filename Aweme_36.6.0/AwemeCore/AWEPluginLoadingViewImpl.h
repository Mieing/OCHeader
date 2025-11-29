@class NSString;

@interface AWEPluginLoadingViewImpl : NSObject <BDPLoadingViewPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (id)bdp_getLoadingViewWithConfig:(id)a0;
- (id)bdp_getLoadingView;
- (id)bdp_getWindowLoadingViewWithModel:(id)a0;
- (id)bdp_getToastViewWithModel:(id)a0;
- (id)bdp_showPanelOnController:(id)a0 contentController:(id)a1 model:(id)a2;
- (id)bdp_getLoadingSearchRemindView;

@end
