@class WCFinderSizingRichTextLayout, NSString, NSLayoutConstraint, RichTextView;

@interface WCFinderSizingRichTextView : UIView <ILinkEventExt>

@property (retain, nonatomic) RichTextView *textView;
@property (nonatomic) unsigned long long useStyleHash;
@property (retain, nonatomic) RichTextView *suffixTextView;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (copy, nonatomic) id /* block */ onClickAction;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (nonatomic) BOOL pinWidth;
@property (retain, nonatomic) WCFinderSizingRichTextLayout *layout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)defaultParserType;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_useLayout:(id)a0;
- (void)layoutSubviews;
- (void)_onLayoutStyleChanged;
- (void)_onLayoutStyleChanged:(BOOL)a0;
- (void)_onLayoutStyleChangeDelayFlush;
- (void)_setupSuffixTextView;
- (void)_checkConstraints;
- (BOOL)_isUsingAutoLayout;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)sizeToFit;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onTextClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
