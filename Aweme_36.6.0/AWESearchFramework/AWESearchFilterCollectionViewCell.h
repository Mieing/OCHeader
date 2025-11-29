@class UILabel, UIView, AWESearchFilterCollectionViewColorConfiguration;

@interface AWESearchFilterCollectionViewCell : UICollectionViewCell

@property (nonatomic) double fontSize;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) AWESearchFilterCollectionViewColorConfiguration *colorConfiguration;
@property (retain, nonatomic) UIView *redDot;
@property (nonatomic) BOOL isNewStyle;
@property (nonatomic) BOOL needBold;

- (void)updateRedDot:(BOOL)a0;
- (void)setBorder;
- (void)updateRedDotNew:(BOOL)a0;
- (void)getRedDotFrame;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateColor;
- (void)updateWithText:(id)a0;

@end
