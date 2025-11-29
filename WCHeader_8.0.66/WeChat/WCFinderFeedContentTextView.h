@class MMBarItemCustomView, YYLabel, WCFinderFeedContentTextViewConfig, NSString, UILabel, RichTextView, UIView;
@protocol WCFinderFeedContentTextClickActionDelegate, WCFinderFeedContentTextViewLayoutDelegate;

@interface WCFinderFeedContentTextView : UIView <ILinkEventExt, RichTextLayoutDelegate>

@property (retain, nonatomic) UILabel *prefixLabel;
@property (retain, nonatomic) UIView *prefixContainer;
@property (retain, nonatomic) RichTextView *preContentView;
@property (retain, nonatomic) RichTextView *contentView;
@property (retain, nonatomic) UIView *suffixView;
@property (retain, nonatomic) UIView *clipArrowView;
@property (retain, nonatomic) MMBarItemCustomView *suffixMaskView;
@property (retain, nonatomic) YYLabel *actionLabel;
@property (nonatomic) BOOL isEnableReadMoreAction;
@property (nonatomic) long long contentLine;
@property (nonatomic) BOOL needExtraLine;
@property (weak, nonatomic) id<WCFinderFeedContentTextClickActionDelegate> delegate;
@property (weak, nonatomic) id<WCFinderFeedContentTextViewLayoutDelegate> layoutDelegate;
@property (nonatomic) BOOL enableTouchExpand;
@property (nonatomic) BOOL enableLongPress;
@property (nonatomic) BOOL isRichTextLinkClickHandled;
@property (retain, nonatomic) WCFinderFeedContentTextViewConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isInvisibleLinesAreLinkStyleForContent:(id)a0 width:(double)a1 font:(id)a2 unExpandLineNum:(unsigned long long)a3 lineSpacing:(double)a4 rightIconPadding:(double)a5;
+ (id)contentTextViewWithConfig:(id)a0;
+ (double)textHeightWithConfig:(id)a0;
+ (struct CGSize { double x0; double x1; })textSizeWithConfig:(id)a0;

- (void)clipArrowViewAction;
- (void)textExpandAction;
- (void)onExpandAction:(BOOL)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onTextClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onTextLongPressed:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withView:(id)a2;
- (void)onLinkLongPressed:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withView:(id)a2;
- (id)displayLinks;
- (void)delayedTouchesEnded;
- (void)setUp;
- (void)updateConfig;
- (void)updateContentView:(id)a0;
- (void)preCalContentView;
- (void)updateSuffixView;
- (void)updateSuffixViewFrame;
- (void)updatePrefix;
- (void)updateCustomPrefixView;
- (void)updateContent:(id)a0;
- (unsigned long long)getCurrentLines;
- (void)forceForbidSuffixClipping;
- (void)clearSuffixView;
- (void)resetPrefixView;
- (void)enableHeightText;
- (void)dismissHighLightText;
- (void)enableTextClick;
- (void)prepareForReuse;
- (BOOL)isActionLabelHidden;
- (BOOL)isContentTruncated;
- (BOOL)isEnableResponseReadMoreAction;
- (void)setTextFont:(id)a0;
- (void)setLineSpacing:(double)a0;
- (void)setTextColor:(id)a0;
- (void)setActionLabelTextColor:(id)a0;
- (void)setTruncatedTrailingLinkColor:(id)a0;
- (void)setLinkShadowColor:(id)a0;
- (void)setLinkShadowOffset:(struct CGSize { double x0; double x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (double)lineWidthAtY:(double)a0 lineIndex:(long long)a1 richTextView:(id)a2;
- (void)richTextView:(id)a0 updateTruncatedTrailing:(BOOL)a1 truncatedViewframe:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 lastStyleViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (double)originXForLineAtHeight:(double)a0 richTextView:(id)a1;
- (BOOL)shouldOpenNewLineAtY:(double)a0 withLineHeight:(double)a1 richTextView:(id)a2;
- (void).cxx_destruct;

@end
