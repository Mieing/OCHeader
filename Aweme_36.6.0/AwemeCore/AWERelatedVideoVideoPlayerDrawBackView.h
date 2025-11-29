@class NSTimer, AWEPageContext, UILabel, UIView, UIButton;
@protocol AWERVDetailPageContextControlViewProtocol;

@interface AWERelatedVideoVideoPlayerDrawBackView : UIView

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIButton *playPreviousButton;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long count;
@property (retain, nonatomic) AWEPageContext<AWERVDetailPageContextControlViewProtocol> *pageContext;
@property (copy, nonatomic) id /* block */ playPreviousButtonClickedBlock;
@property (copy, nonatomic) id /* block */ backButtonClickedBlock;

- (void)stopCountDown;
- (void)addObserve;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pageContext:(id)a1;
- (void)startCountDownWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)appWillResignActive:(id)a0;
- (void)dealloc;
- (void)appDidBecomeActive:(id)a0;
- (void)setupUI;

@end
