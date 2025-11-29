@class UIColor, NSArray;

@interface MMBorderView : UIView

@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) NSArray *borderPattern;
@property (nonatomic) unsigned long long borders;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDefaultValues;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
