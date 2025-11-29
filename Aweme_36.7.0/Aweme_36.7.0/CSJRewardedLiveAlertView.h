@class UILabel, UIButton, UIImageView, UIView, BUTimer, NSAttributedString;

@interface CSJRewardedLiveAlertView : UIView

@property (copy, nonatomic) NSAttributedString *attrTitleText;
@property (nonatomic) double titleTextHeight;
@property (nonatomic) BOOL autoJump;
@property (nonatomic) long long countDown;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ confirm;
@property (copy, nonatomic) id /* block */ refuse;
@property (retain, nonatomic) BUTimer *timer;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UIButton *refuseBtn;

- (void)onEnterBackground;
- (void)updateLeftSeconds:(id)a0;
- (void)onBecomeActive;
- (void)onRefuse;
- (void)updateRefuseText;
- (void)creatSubViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 text:(id)a1 duration:(long long)a2 autoJump:(BOOL)a3 completion:(id /* block */)a4;
- (void)disappear;
- (void)onConfirm;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)startTimer;
- (void)dealloc;
- (void)showInView:(id)a0;

@end
