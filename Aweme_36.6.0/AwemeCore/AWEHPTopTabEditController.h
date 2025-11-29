@class AWEHPTopTabEditPanelViewController, AWEHPEditPanelConfig;
@protocol AWEPzEngineProtocol, AWEPzComponentProtocol;

@interface AWEHPTopTabEditController : NSObject

@property (retain, nonatomic) AWEHPTopTabEditPanelViewController *viewController;
@property (retain, nonatomic) AWEHPEditPanelConfig *config;
@property (retain, nonatomic) id<AWEPzEngineProtocol> engine;
@property (retain, nonatomic) id<AWEPzComponentProtocol> pzComponent;
@property (copy, nonatomic) id /* block */ panelDidDismiss;

- (BOOL)isEditPanelEnabled;
- (BOOL)isEditPanelShowing;
- (long long)p_canShowPanel;
- (BOOL)tryShowPanelWithEnterMethod:(id)a0;
- (void)trackLongPressEditTabCheck:(long long)a0;
- (id)setupEditPanelConfigWithEnterMethod:(id)a0;
- (void)printAllItemsWith:(id)a0 ReferString:(id)a1;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
