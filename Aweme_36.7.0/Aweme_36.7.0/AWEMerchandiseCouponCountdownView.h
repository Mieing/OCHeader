@class UILabel, AWEDoubleColumnSearchMerchandiseCouponInfoCountdownModel, NSTimer;
@protocol AWEMerchandiseCouponCountdownViewDelegate;

@interface AWEMerchandiseCouponCountdownView : UIView

@property (retain, nonatomic) UILabel *hourLabel;
@property (retain, nonatomic) UILabel *minuteLeftSemicolonLabel;
@property (retain, nonatomic) UILabel *minuteLabel;
@property (retain, nonatomic) UILabel *secondLeftSemicolonLabel;
@property (retain, nonatomic) UILabel *secondLabel;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseCouponInfoCountdownModel *model;
@property (retain, nonatomic) NSTimer *timer;
@property (weak, nonatomic) id<AWEMerchandiseCouponCountdownViewDelegate> delegate;

- (void)configWithModel:(id)a0;
- (void)countdownStatusDidChange:(unsigned long long)a0;
- (void)beginTimer;
- (long long)getCountdownInterVal;
- (void)countdownAction;
- (struct CGSize { double x0; double x1; })countDownSize;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)endTimer;
- (void)layoutSubviews;
- (void)updateText;
- (void)setupUI;

@end
