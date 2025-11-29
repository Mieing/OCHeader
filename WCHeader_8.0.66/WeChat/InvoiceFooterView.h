@class UILabel, NSString;

@interface InvoiceFooterView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSString *title;

+ (double)minHeightWithTitle:(id)a0 width:(double)a1;
+ (id)attrTitleByTitle:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
