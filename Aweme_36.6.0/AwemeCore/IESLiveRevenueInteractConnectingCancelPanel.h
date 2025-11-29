@protocol IESLiveMultiLinkerProvider;

@interface IESLiveRevenueInteractConnectingCancelPanel : HTSLivePopUpView

@property (weak, nonatomic) id<IESLiveMultiLinkerProvider> provider;

- (void)onCloseButtonClicked;
- (void)onCancelButtonClicked;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 diContext:(id)a1;
- (void)trackConnectionGameTabShow;
- (void)trackConnectionGameTabClick:(id)a0;
- (void)trackConnectionQuitComfirm;
- (void).cxx_destruct;
- (void)layoutUI;

@end
