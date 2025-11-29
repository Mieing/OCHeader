@class NSString, AWEHPTopTabEditController;

@interface AWEHPEditPanelController : NSObject <AWEAlertProtocol, AWEHPMessageForwardDelegate>

@property (retain, nonatomic) AWEHPTopTabEditController *editController;
@property (copy, nonatomic) id /* block */ onClose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showWithCloseCallback:(id /* block */)a0;
- (BOOL)isEditPanelEnabled;
- (BOOL)isEditPanelShowing;
- (void)didLongPressTopBar;
- (BOOL)showPanelWithEnterMethod:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
