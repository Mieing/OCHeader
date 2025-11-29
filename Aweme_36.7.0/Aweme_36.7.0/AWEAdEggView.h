@class UIButton, NSString, NSTimer, AWEAdWebViewController, LOTAnimationView, AWEAwemeModel, BDImageView;
@protocol AWEAdEggModelProtocol;

@interface AWEAdEggView : UIView <AWEAdEggViewProtocol>

@property (retain, nonatomic) id<AWEAdEggModelProtocol> model;
@property (retain, nonatomic) NSString *eggType;
@property (copy, nonatomic) NSString *webURL;
@property (copy, nonatomic) NSString *openURL;
@property (copy, nonatomic) NSString *sourceURL;
@property (copy, nonatomic) NSString *lynxURL;
@property (retain, nonatomic) NSTimer *autoDismissTimer;
@property (nonatomic) double bindDataTime;
@property (nonatomic) double maxWaitToShowTime;
@property (nonatomic) double displayTime;
@property (retain, nonatomic) AWEAdWebViewController *webViewController;
@property (retain, nonatomic) LOTAnimationView *lottieView;
@property (weak, nonatomic) BDImageView *eggImageView;
@property (retain, nonatomic) UIButton *closeButton;
@property (copy, nonatomic) id /* block */ clickImageBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeButtonClicked;
- (void)clickImage;
- (void)updateViewWithEggModel:(id)a0 aweme:(id)a1 eggFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 closeButtonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 maxWaitToShowTime:(double)a4 completionBlock:(id /* block */)a5 clickImageBlock:(id /* block */)a6 dismissBlock:(id /* block */)a7 canViewBeClicked:(BOOL)a8;
- (BOOL)hasOvertime;
- (void)resetEggView;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleSingleTap:(id)a0;

@end
