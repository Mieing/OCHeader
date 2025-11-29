@class UIColor, UIFont, NSArray, NSString, UILabel;

@interface IESECFittingSingleLineLabel : UIView {
    UILabel *_label;
}

@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (copy, nonatomic) NSArray *elements;
@property (copy, nonatomic) NSString *separator;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupSubviews;

@end
