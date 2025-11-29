@class AWEHPBottomTabEditPanelViewController, AWEHPBottomEditPanelShowContext, AWEHPBottomEditPanelConfig;

@interface AWEHPBottomTabEditController : NSObject

@property (weak, nonatomic) AWEHPBottomTabEditPanelViewController *viewController;
@property (retain, nonatomic) AWEHPBottomEditPanelShowContext *showContext;
@property (retain, nonatomic) AWEHPBottomEditPanelConfig *config;
@property (copy, nonatomic) id /* block */ panelDidDismiss;
@property (copy, nonatomic) id /* block */ updateSelectedItemModel;

- (void)trackPanelShow;
- (void)updatePanelThemeStyle:(long long)a0;
- (id)currentTabID;
- (BOOL)showPanelOnVC:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)dismissPanelNeedAnimated:(BOOL)a0 dismissType:(long long)a1;
- (BOOL)p_canShowPanel;
- (id)getDimissReasonWithDismissType:(long long)a0;
- (void)trackPanelClickWithClickLocation:(id)a0 selectedTabID:(id)a1;
- (void)trackPanelDismissWithDismissType:(long long)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
