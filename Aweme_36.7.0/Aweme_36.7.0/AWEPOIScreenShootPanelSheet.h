@class AWEPOIScreenShotShareService;

@interface AWEPOIScreenShootPanelSheet : DUXBasicSheet

@property (weak, nonatomic) AWEPOIScreenShotShareService *service;
@property (nonatomic) BOOL disableAutoDismiss;

- (void)showOnViewController:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
