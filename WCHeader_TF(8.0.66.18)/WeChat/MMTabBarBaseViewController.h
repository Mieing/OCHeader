@class NSString, FontSettingUtil;

@interface MMTabBarBaseViewController : MMUIViewController <MMUIHookViewDelegate, FontSettingUtilDelegate, Hero.HeroViewControllerDelegate> {
    FontSettingUtil *m_fontSettingUtil;
    BOOL m_isFirstAppear;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateViewWhenSelectTab:(BOOL)a0;
- (id)init;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)fixTabbarState;
- (void)viewDidLoad;
- (void)OnMMUIHookViewFrameChanged:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)bindRedDotInfoWhenTabChange:(BOOL)a0;
- (void)viewDidPop:(BOOL)a0;
- (void)viewWillPush:(BOOL)a0;
- (void)viewWillPop:(BOOL)a0;
- (void)willEnterForground;
- (void)willEnterBackground;
- (double)getMainTableHeight;
- (double)getMainTableBottomInset;
- (void)tryFixOrientation;
- (id)navigationTitleFont;
- (void)onMainTabBarHiddenChange:(BOOL)a0;
- (id)getCurrentViewController;
- (void)heroDidEndTransition;
- (unsigned long long)getTabBarItemIndex;
- (void).cxx_destruct;

@end
