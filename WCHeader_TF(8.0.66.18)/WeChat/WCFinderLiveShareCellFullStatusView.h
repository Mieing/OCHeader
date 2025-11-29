@class UIColor, NSString, UIImageView, UILabel;

@interface WCFinderLiveShareCellFullStatusView : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) NSString *labelText;
@property (nonatomic) BOOL enableMultiline;
@property (nonatomic) double middleSpacing;
@property (retain, nonatomic) UIColor *textColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)startLiveAnimation;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)accessibilityLabel;
- (void)layoutSubviews;
- (id)getLabel;
- (void).cxx_destruct;

@end
