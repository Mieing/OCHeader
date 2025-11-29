@class IESECLiveRoomContext, UIView;
@protocol IESHYContainerProtocol;

@interface IESECLiveAnchorWebView : IESECLiveAnchorNavigationBaseView

@property (retain, nonatomic) IESECLiveRoomContext *roomContext;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *webView;
@property (nonatomic) BOOL showTitleBar;

- (double)navbarHeight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 urlString:(id)a1 showTitleBar:(BOOL)a2 roomContext:(id)a3;
- (void)pop;
- (void).cxx_destruct;

@end
