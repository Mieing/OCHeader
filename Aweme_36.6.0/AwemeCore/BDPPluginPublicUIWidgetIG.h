@class UIViewController;

@interface BDPPluginPublicUIWidgetIG : BDPBridgeInstancePlugin

@property (weak, nonatomic) UIViewController *controller;
@property (nonatomic) BOOL haveSheet;

- (void)showModalWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)showToastWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)hideToastWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)showActionSheetWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;

@end
