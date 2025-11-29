@class NSString;

@interface FlowMarkdownX.FlowMarkdownView : UIView {
    void /* function */ captionLinkClick;
    void /* function */ interactLink;
    void /* function */ tableFullscreenPreviewBlock;
    void /* function */ codeFullscreenPreviewBlock;
    void /* function */ debugClick;
    void /* function */ onTapImage;
    void /* function */ codeViewCopyClick;
    void /* function */ getCurrentMessageBlock;
    void /* function */ updateSingleHTMLCardBlock;
    void /* function */ firstRefreshSourcesBlock;
    void /* unknown type, empty encoding */ textSelectedBlock;
    void /* unknown type, empty encoding */ isInCollectionPreView;
    void /* unknown type, empty encoding */ isDataBlockFull;
    void /* unknown type, empty encoding */ delegate;
    void /* function */ subItemCopyClick;
    void /* unknown type, empty encoding */ markdownService;
    void /* unknown type, empty encoding */ enableRenderOpt;
    void /* unknown type, empty encoding */ visibleRect;
    void /* unknown type, empty encoding */ viewportContainer;
    void /* unknown type, empty encoding */ firstRefresh;
    void /* unknown type, empty encoding */ originalMarkdownText;
    void /* unknown type, empty encoding */ originalMessage;
    void /* unknown type, empty encoding */ isTyping;
    void /* unknown type, empty encoding */ layoutInfo;
    void /* unknown type, empty encoding */ markdownViews;
}

@property (nonatomic, copy) id /* block */ captionLinkClick;
@property (nonatomic, copy) id /* block */ interactLink;
@property (nonatomic, copy) id /* block */ tableFullscreenPreviewBlock;
@property (nonatomic, copy) id /* block */ codeFullscreenPreviewBlock;
@property (nonatomic, copy) id /* block */ debugClick;
@property (nonatomic, copy) id /* block */ onTapImage;
@property (nonatomic, copy) id /* block */ codeViewCopyClick;
@property (nonatomic, copy) id /* block */ getCurrentMessageBlock;
@property (nonatomic, copy) id /* block */ updateSingleHTMLCardBlock;
@property (nonatomic, copy) id /* block */ firstRefreshSourcesBlock;
@property (nonatomic, copy) id /* block */ subItemCopyClick;
@property (nonatomic, readonly) NSString *markdownString;

+ (id)calculateHeightForMessage:(id)a0 inWidth:(double)a1;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getLastGlyphRect;
- (id /* block */)longPressAtLocationForSelect:(struct CGPoint { double x0; double x1; })a0;
- (void)cancelSelectedIfNeeded;
- (id)updateOriginalMarkdownTextWithMessage:(id)a0 cachedLayoutInfo:(id)a1;
- (void)updateShowImageState:(id)a0;
- (id)firstMarkdownImageViewOf:(id)a0;
- (void)selectAll;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
