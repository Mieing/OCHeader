@class AWELiveAutoEnterBottomView, AWELiveAutoEnterStyleAView, NSTimer, NSDictionary, AWELiveFeedStatusViewModel, UIButton;

@interface AWELiveAutoEnterAnimationView : UIView

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } liveStatusFrame;
@property (retain, nonatomic) AWELiveAutoEnterStyleAView *styleAView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) AWELiveAutoEnterBottomView *bottomView;
@property (retain, nonatomic) NSTimer *countdownTimer;
@property (nonatomic) double countdownInterval;
@property (retain, nonatomic) AWELiveFeedStatusViewModel *viewModel;
@property (retain, nonatomic) NSDictionary *configDict;
@property (nonatomic) long long countDownDuration;
@property (copy, nonatomic) id /* block */ downCountReachedBlock;
@property (copy, nonatomic) id /* block */ cancelButtonClickedBlock;

- (void)invalidateDownCountTimer;
- (void)creatAutoEnterStyleAView;
- (void)creatCancelButton;
- (void)creatBottomView;
- (void)p_downCountReached;
- (void)startStyleAAnimations:(id /* block */)a0 duration:(long long)a1 completion:(id /* block */)a2;
- (BOOL)isWidthChanged;
- (void)createDownCountTimerWithDuration:(long long)a0;
- (id)initWithLiveStatusFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withViewModel:(id)a1 configDict:(id)a2;
- (double)cancelBtnFontSize;
- (double)cancelBtnTopPadding;
- (void)startAnimations:(id /* block */)a0 duration:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)clear;
- (void)dealloc;
- (void)setupUI;
- (void)cancelButtonClicked;

@end
