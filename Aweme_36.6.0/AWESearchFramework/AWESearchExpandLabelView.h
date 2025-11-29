@class UIColor, NSString, UIImageView, UILabel;

@interface AWESearchExpandLabelView : UIView

@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) BOOL expanded;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastFrame;
@property (retain, nonatomic) UIImageView *expendImageView;
@property (retain, nonatomic) UILabel *label;
@property (nonatomic) double topBottomPadding;
@property (readonly, nonatomic) double oneLineLabelHeight;
@property (copy, nonatomic) id /* block */ heightChanged;
@property (copy, nonatomic) NSString *text;

- (void)initViews;
- (struct CGSize { double x0; double x1; })textSizeAvailableWidth:(double)a0;
- (void).cxx_destruct;
- (void)setTextColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setTextFont:(int)a0;
- (void)tapAction;
- (void)expand:(BOOL)a0;

@end
