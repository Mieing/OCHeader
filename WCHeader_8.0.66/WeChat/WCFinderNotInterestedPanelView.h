@class UIImageView, UILabel, UIView;

@interface WCFinderNotInterestedPanelView : MMUIView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic, getter=isHighLight) BOOL highLight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)setupSubViewsAndLayout;
- (void)updateView;
- (id)getTipsLabelText;
- (void)setMoveOffset:(double)a0;
- (void).cxx_destruct;

@end
