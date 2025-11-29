@class BackgroundMoveView, MultitalkMinimizeView, NSString;
@protocol MultitalkMinimizeViewControllerDelegate;

@interface MultitalkMinimizeViewController : MMUIViewController <BackgroundMoveViewDelegate>

@property (retain, nonatomic) BackgroundMoveView *m_backgroundImageView;
@property (retain, nonatomic) MultitalkMinimizeView *m_minimizeView;
@property (weak, nonatomic) id<MultitalkMinimizeViewControllerDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)moveView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })moveViewOriginRect;
- (id)backgroundView;
- (id)backgroundImage;
- (id)containerView;
- (void)adsorbToWindow;
- (void)viewDidLoad;
- (void)initBackgroundView;
- (void)initContainerView;
- (void)viewDidLayoutSubviews;
- (void)startTimer;
- (void)updateDescMode:(unsigned long long)a0 withDisplayTime:(double)a1;
- (void)onBackgroundMoveViewTap;
- (void).cxx_destruct;

@end
