@class UIViewController, NSString, UIImageView, NSTimer, AWESearchAdEasterEggModel, UIView, UIButton;
@protocol AWEWebViewControllerProtocol;

@interface AWESearchAdEggManager : NSObject

@property (retain, nonatomic) AWESearchAdEasterEggModel *model;
@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *interactionView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIViewController<AWEWebViewControllerProtocol> *webViewController;
@property (retain, nonatomic) UIImageView *gifImageView;
@property (retain, nonatomic) NSTimer *autoDismissTimer;
@property (nonatomic) double bindDataTime;
@property (nonatomic) double maxWaitToShowTime;
@property (nonatomic) BOOL eggDisablePrefetch;

+ (id)shareInstance;

- (void)showEggAdWithModel:(id)a0 searchKeyword:(id)a1;
- (void)showEggAdWithModel:(id)a0 searchKeyword:(id)a1 enterFrom:(id)a2 completionBlock:(id /* block */)a3;
- (void)displayEggOnView:(id)a0 eggModel:(id)a1 eggFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 closeButtonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 searchKeyword:(id)a4 enterFrom:(id)a5;
- (void)displayEggOnView:(id)a0 eggModel:(id)a1 eggFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 closeButtonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 searchKeyword:(id)a4 enterFrom:(id)a5 completionBlock:(id /* block */)a6;
- (void)closeBtnClicked;
- (BOOL)hasOvertime;
- (void)tryShowing;
- (void)trackLoadFailEvent:(long long)a0;
- (void)contentClicked;
- (void)dismissWithNotification:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)autoDismiss;

@end
