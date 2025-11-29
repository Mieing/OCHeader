@class AWERVDrawBackInfoView, NSTimer, UIView, AWERVDetailPageContext, UIButton;

@interface AWERVDrawBackView : UIView

@property (retain, nonatomic) UIView *headView;
@property (retain, nonatomic) UIButton *leftBackButton;
@property (retain, nonatomic) UIView *bottomContainerView;
@property (retain, nonatomic) AWERVDrawBackInfoView *bottomInfoView;
@property (retain, nonatomic) AWERVDetailPageContext *pageContext;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long count;

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
- (void)backButtonAction;

@end
