@class NSString, UIImageView, UILabel, UIView;

@interface AWETeenCountryCodeView : UIView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *separationLine;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) id /* block */ didChangeCountryCode;

- (void)updateLabel:(id)a0;
- (void)updateCountryCode:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
