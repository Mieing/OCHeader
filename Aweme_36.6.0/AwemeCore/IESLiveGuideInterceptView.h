@class UIImageView, NSTimer, UILabel, BlockDetail, UIView;

@interface IESLiveGuideInterceptView : UIView

@property (retain, nonatomic) UIImageView *statusImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) NSTimer *countDownTimer;
@property (nonatomic) long long unBlockTime;
@property (copy, nonatomic) BlockDetail *blockDetail;
@property (retain, nonatomic) UIView *actionView;
@property (retain, nonatomic) UILabel *actionViewLabel;
@property (nonatomic) long long timeDiff;
@property (copy, nonatomic) id /* block */ clickedView;
@property (copy, nonatomic) id /* block */ countDownCompletion;

- (void)viewClicked;
- (void)addGesture;
- (void)removeTimer;
- (void)updateBlockDetailModel:(id)a0;
- (void)setupInterceptView;
- (void)createActionView:(id)a0;
- (void)showCountDownPrompts:(id)a0;
- (double)calculateActionViewWidth:(id)a0;
- (void)endCountDown;
- (id)calCountDown:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
