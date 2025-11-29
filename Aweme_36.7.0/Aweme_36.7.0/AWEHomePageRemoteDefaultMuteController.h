@interface AWEHomePageRemoteDefaultMuteController : AWEHomePageRemoteCommonController

@property (nonatomic) BOOL isConsumed;

- (void)homePageRemotePanelWillShow;
- (void)homePageRemotePanelDidShow;
- (BOOL)isBusinessConsumed;
- (BOOL)canShowCellView;
- (void)homePageRemoteCellClick;
- (BOOL)needLoadController;
- (void)homePageRemotePanelDidDismissWithReason:(long long)a0;
- (BOOL)tryUpdateButtonStatus;
- (struct CGPoint { double x0; double x1; })toastCenter;
- (id)button;

@end
