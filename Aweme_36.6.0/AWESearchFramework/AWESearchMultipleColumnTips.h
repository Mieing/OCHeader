@class DUXBaseLabel, DUXBaseImageView, NSString;

@interface AWESearchMultipleColumnTips : UIView

@property (weak, nonatomic) DUXBaseImageView *arrowIcon;
@property (weak, nonatomic) DUXBaseImageView *bubbleBgView;
@property (weak, nonatomic) DUXBaseLabel *bubbleLabel;
@property (copy, nonatomic) NSString *tipsText;

- (void)showBubble;
- (void)hiddenBubble;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)setupLayout;

@end
