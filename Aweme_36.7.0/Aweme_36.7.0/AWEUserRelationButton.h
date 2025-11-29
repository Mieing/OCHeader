@class UIStackView, UIColor, UIImageView, UIImage, UILabel, NSString, UIFont;

@interface AWEUserRelationButton : UIButton

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIImageView *leftImageView;
@property (retain, nonatomic) UIImageView *rightImageView;
@property (retain, nonatomic) UILabel *myTitleLabel;
@property (retain, nonatomic) UIImage *leftImage;
@property (retain, nonatomic) UIColor *leftImageTintColor;
@property (retain, nonatomic) UIImage *rightImage;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *titleColor;
@property (nonatomic) BOOL titleAdjustsFontSizeToFitWidth;
@property (nonatomic) double spacing;

- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (void)setImage:(id)a0 forState:(unsigned long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTitleColor:(id)a0 forState:(unsigned long long)a1;

@end
