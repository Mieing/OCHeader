@class WCFinderDynamicRichTextParser, UIFont, UIColor, NSString, YYLabel;
@protocol WCFinderDynamicRichTextViewDelegate;

@interface WCFinderDynamicRichTextView : UIView <WCFinderDynamicRichTextViewDelegate>

@property (nonatomic) struct CGSize { double width; double height; } fontIconSize;
@property (retain, nonatomic) YYLabel *label;
@property (retain, nonatomic) WCFinderDynamicRichTextParser *richTextParser;
@property (weak, nonatomic) id<WCFinderDynamicRichTextViewDelegate> delegate;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (nonatomic) struct CGSize { double width; double height; } iconPadding;
@property (retain, nonatomic) NSString *richText;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) double horizontalPadding;
@property (nonatomic) double verticalPadding;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) long long textAlignment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)covertRichTextToRichTextViewContent:(id)a0 iconSize:(struct CGSize { double x0; double x1; })a1 iconColor:(id)a2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setIsAccessibilityElement:(BOOL)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)sizeToFit;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)onTextView:(id)a0 onClickLinkWithHref:(id)a1;
- (void)onClickText;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
