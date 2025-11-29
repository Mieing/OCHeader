@class UILabel, UIImageView, UIView;

@interface AWETeenAutoPlaySwitchView : UIView

@property (retain, nonatomic) UIView *switchContentView;
@property (retain, nonatomic) UILabel *timerView;
@property (retain, nonatomic) UIImageView *pauseImageView;
@property (retain, nonatomic) UIImageView *refreshView;
@property (retain, nonatomic) UIImageView *playImageView;
@property (nonatomic) BOOL showingTimerTip;

- (void)updateViewWithAutoPlayState:(BOOL)a0 animated:(BOOL)a1;
- (void)updatePlayTimeTip:(BOOL)a0 withText:(id)a1 autoPlayState:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
