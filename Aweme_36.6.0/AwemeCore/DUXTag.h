@class UIColor, NSString, UIImageView, UILabel;

@interface DUXTag : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *contentColor;
@property (nonatomic) double contentIconWidth;
@property (nonatomic) double horizentalContentEdgeInset;
@property (nonatomic) double contentHorizentalMargin;
@property (copy, nonatomic) id /* block */ iconProvider;
@property (nonatomic) unsigned long long iconPosition;
@property (nonatomic) unsigned long long enlargeType;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 enlargeType:(unsigned long long)a1;
- (id)initWithEnlargeType:(unsigned long long)a0;
- (void)p_setupFrame;
- (double)p_intrinsicContentHeight;
- (double)p_intrinsicContentWidth;
- (BOOL)p_showIconImageView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
