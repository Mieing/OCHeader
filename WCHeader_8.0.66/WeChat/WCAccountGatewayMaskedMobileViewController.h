@protocol WCAccountGatewayMaskedMobileViewControllerDelegate;

@interface WCAccountGatewayMaskedMobileViewController : WCAccountBaseViewController

@property (weak, nonatomic) id<WCAccountGatewayMaskedMobileViewControllerDelegate> delegate;

- (BOOL)useSheetView;
- (void)initView;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)continueWithNext;
- (void).cxx_destruct;

@end
