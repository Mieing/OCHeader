@class UIFont, NSString, UIColor, UILabel, NSAttributedString;

@interface MMFinderLiveSpinnerLabel : UIView

@property (retain, nonatomic) UILabel *primaryLabel;
@property (retain, nonatomic) UILabel *alternativeLabel;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) long long textAlignment;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setText:(id)a0 direction:(unsigned long long)a1 duration:(double)a2 completionBlock:(id /* block */)a3;
- (void)setAttributedText:(id)a0 direction:(unsigned long long)a1 duration:(double)a2 completionBlock:(id /* block */)a3;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)accessibilityElements;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
