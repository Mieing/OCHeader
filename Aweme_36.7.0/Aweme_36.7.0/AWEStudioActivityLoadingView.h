@class NSString, LOTAnimationView, UILabel, UIView, UIButton;

@interface AWEStudioActivityLoadingView : UIView <AWEStudioLoadingViewService>

@property (retain, nonatomic) UIView *bgContentView;
@property (retain, nonatomic) LOTAnimationView *lotAnamitionView;
@property (retain, nonatomic) UILabel *progressLabel;
@property (copy, nonatomic) NSString *tips_title;
@property (retain, nonatomic) UIButton *closeButton;
@property (copy, nonatomic) id /* block */ closelButtonHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showLoadingOnView:(id)a0;

- (void)dismissWithAnimated:(BOOL)a0;
- (void)setLayoutSubview;
- (void)onCloseButtonTap;
- (void)setLoadingResource:(id)a0;
- (void)showCloseButtonWithCloseEventHandler:(id /* block */)a0;
- (void)stopAnimating;
- (void)startAnimating;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateProgress:(double)a0;

@end
