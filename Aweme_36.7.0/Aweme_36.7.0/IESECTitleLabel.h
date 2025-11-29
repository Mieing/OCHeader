@class UIFont, NSArray, NSString, UIColor, YYLabel;

@interface IESECTitleLabel : UIView {
    YYLabel *_label;
}

@property (copy, nonatomic) NSArray *iconModels;
@property (nonatomic) double iconFittingHeight;
@property (nonatomic) double cornerRadiusForIcons;
@property (nonatomic) double iconSpacing;
@property (nonatomic) double spacingBetweenIconsAndTitle;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) double lineHeight;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) long long numberOfLines;

- (id)spacingStringWithSpacing:(double)a0;
- (void).cxx_destruct;
- (void)updateAttributedText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (id)attributedText;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupSubviews;

@end
