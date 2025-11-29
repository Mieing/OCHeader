@class UILabel, UIButton, UIView;

@interface AWEDelayRecordPanelHeaderView : UIView

@property (retain, nonatomic) UILabel *countdownTitleLabel;
@property (retain, nonatomic) UIView *countdownButtonContainerView;
@property (retain, nonatomic) UILabel *recordModeTitleLabel;
@property (retain, nonatomic) UIView *recordModeButtonContainerView;
@property (retain, nonatomic) UIButton *leftCountdownOptionButton;
@property (retain, nonatomic) UIButton *rightCountdownOptionButton;
@property (retain, nonatomic) UIButton *leftRecordModeOptionButton;
@property (retain, nonatomic) UIButton *rightRecordModeOptionButton;

- (void)addSubviews;
- (void)addButtonCornerMaskFor:(id)a0;
- (void)updateRecordModeOptionButtonState:(BOOL)a0;
- (void)setSelectedRecordModeButtonWithDelayType:(long long)a0;
- (void)setSelectedCountdownButtonWithDelayMode:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
