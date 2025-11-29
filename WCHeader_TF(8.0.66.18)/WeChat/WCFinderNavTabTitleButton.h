@class YYLabel, NSString, WCFinderNavTabTitle;

@interface WCFinderNavTabTitleButton : MMUIButton

@property (retain, nonatomic) WCFinderNavTabTitle *normalTitle;
@property (retain, nonatomic) WCFinderNavTabTitle *selectedTitle;
@property (nonatomic) struct CGSize { double width; double height; } normalSize;
@property (nonatomic) struct CGSize { double width; double height; } selectedSize;
@property (retain, nonatomic) YYLabel *label;
@property (retain, nonatomic) NSString *dispalyAccessibilityLabel;

- (void)setupTitle:(id)a0 selectedTitle:(id)a1 accessibilityLabel:(id)a2;
- (struct CGSize { double x0; double x1; })displaySizeFotTitle:(id)a0;
- (void)update;
- (id)accessibilityLabel;
- (void)layoutLabel;
- (void)setSelected:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
