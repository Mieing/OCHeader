@class NSString, AWEHPBottomTabEditController;

@interface AWEHPBottomEditPanelController : NSObject <AWEAlertProtocol>

@property (retain, nonatomic) AWEHPBottomTabEditController *editController;
@property (copy, nonatomic) id /* block */ onClose;
@property (copy, nonatomic) id /* block */ panelDidDismiss;
@property (copy, nonatomic) id /* block */ updateSelectedItemModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (void)showWithCloseCallback:(id /* block */)a0;
- (void)updatePanelThemeStyle:(long long)a0;
- (BOOL)showPanelOnVC:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)dismissPanelNeedAnimated:(BOOL)a0 dismissType:(long long)a1;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
