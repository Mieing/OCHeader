@class IESLLPOIScreenShotShareService;

@interface IESLLPOIScreenShootPanelSheet : DUXBasicSheet

@property (weak, nonatomic) IESLLPOIScreenShotShareService *service;
@property (nonatomic) BOOL disableAutoDismiss;

- (void)showOnViewController:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
