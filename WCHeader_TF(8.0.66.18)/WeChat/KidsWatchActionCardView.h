@class MMUILabel, KidsWatchButton;

@interface KidsWatchActionCardView : UIView

@property (copy, nonatomic) id /* block */ tapHandler;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *contentLabel;
@property (retain, nonatomic) KidsWatchButton *actionButton;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double buttonWidth;
@property (nonatomic) unsigned long long action;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)updateSizeAndCalculateHeightFromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onTapActionButton;
- (void).cxx_destruct;

@end
