@class UIFont, NSString, UIImageView, AWERLSegmentRedDotView, NSObject;

@interface AWERLSegmentItemView : UIButton <AWERLSegmentItemProtocol>

@property (retain, nonatomic) NSObject *data;
@property (copy, nonatomic) id /* block */ selectAction;
@property (retain, nonatomic) UIFont *normalFont;
@property (retain, nonatomic) UIFont *selectedFont;
@property (nonatomic) double titlePadding;
@property (nonatomic) BOOL hasRedDotWhenSwitched;
@property (retain, nonatomic) AWERLSegmentRedDotView *redDotView;
@property (retain, nonatomic) UIImageView *trailingIconView;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic) double adaptFontScale;
@property (copy, nonatomic) id /* block */ containerWidthBlock;
@property (copy, nonatomic) id /* block */ customExtAccessibilityTextBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__setupUI;
- (void)setSelectAction:(id /* block */)a0 data:(id)a1;
- (void)__onClickAction;
- (void)layoutTrailingIconViewWithType:(unsigned long long)a0;
- (void)updateTrailingIconWithImage:(id)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 animated:(BOOL)a2 trailingType:(unsigned long long)a3;
- (double)adaptiveFontSize;
- (BOOL)fontSizeAdapted;
- (void)setRedDotHidden:(BOOL)a0 contentString:(id)a1;
- (void)updateTrailingIconWithImage:(id)a0 animated:(BOOL)a1 trailingType:(unsigned long long)a2;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (void)setSelected:(BOOL)a0;
- (unsigned long long)accessibilityTraits;
- (void)setImage:(id)a0 forState:(unsigned long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
