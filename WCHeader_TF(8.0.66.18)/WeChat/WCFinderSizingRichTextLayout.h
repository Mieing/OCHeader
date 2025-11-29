@class WCFinderSizingRichTextView, WCFinderRichTextStyleGroup, NSString, UIColor, UIFont, WCFinderRichTextConfig;
@protocol WCFinderSizingRichTextDelegate;

@interface WCFinderSizingRichTextLayout : NSObject <RichTextLayoutDelegate>

@property (weak, nonatomic) WCFinderSizingRichTextView *attachedView;
@property (retain, nonatomic) WCFinderRichTextConfig *config;
@property (nonatomic) unsigned long long contentHash;
@property (retain, nonatomic) WCFinderRichTextConfig *suffixConfig;
@property (nonatomic) BOOL isExpanded;
@property (retain, nonatomic) WCFinderRichTextStyleGroup *sizedStyle;
@property (retain, nonatomic) WCFinderRichTextStyleGroup *unboundedStyle;
@property (weak, nonatomic) id<WCFinderSizingRichTextDelegate> delegate;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) BOOL showExpand;
@property (nonatomic) BOOL trimContent;
@property (retain, nonatomic) NSString *closureContent;
@property (nonatomic) BOOL alwaysDisplayExpand;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) NSString *trailingLinkColor;
@property (nonatomic) long long lineNumber;
@property (nonatomic) double lineSpacing;
@property (nonatomic) long long expandLimitNumber;
@property (nonatomic) long long parserType;
@property (retain, nonatomic) NSString *expandWording;
@property (retain, nonatomic) NSString *expandedSuffix;
@property (nonatomic) double expandedSuffixPadding;
@property (readonly, nonatomic) BOOL showExpandClosure;
@property (retain, nonatomic) UIColor *dynamicIconDefaultColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)updateTextConfig:(id /* block */)a0;
- (void)updateSuffixTextConfig:(id /* block */)a0;
- (void)_onAttrsChanged:(id)a0 changes:(id)a1;
- (void)_updateContentHash;
- (id)styleForWidth:(double)a0;
- (id)_trimText:(id)a0;
- (void)applyWidth:(double)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)trailLinkColorXML;
- (void)_onClickExpand;
- (void)_onClickClosure;
- (void)_checkHeightChange:(id /* block */)a0;
- (id)displayText;
- (void).cxx_destruct;

@end
