@class NSMutableDictionary, AWEIMTextMessage, IESIMWaitingReplyLoadingView, NSString, IESIMMdTableCollectionView;
@protocol AWEIMNativeDynamicContentInterface;

@interface AWEIMInnerTextContentComponent : AWEIMTextContentComponent <AWEIMInnerMessageContentComponentProtocol, IESIMMdCodeBlockViewDelegate, IESIMMdTableCollectionViewDelegate>

@property (retain, nonatomic) AWEIMTextMessage *subMessage;
@property (weak, nonatomic) id<AWEIMNativeDynamicContentInterface> contentService;
@property (retain, nonatomic) IESIMMdTableCollectionView *tableCollectionView;
@property (retain, nonatomic) NSMutableDictionary *mdViewCacheMap;
@property (retain, nonatomic) NSMutableDictionary *presenterMap;
@property (retain, nonatomic) IESIMWaitingReplyLoadingView *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellVisibleLifeCycleChanged:(unsigned long long)a0;
- (void)onCellPrepareReuseForCurrentViewModel;
- (void)afterRenderCellDidFinished;
- (BOOL)enableDisplay;
- (void)didUpdateContent;
- (id)displayAttributedContent;
- (void)appendEllipsisContentIfNeed;
- (void)parseMarkdownIfCan;
- (void)appendLoadingIfNeed;
- (id)getLoadingStrWithFont:(id)a0;
- (BOOL)p_replaceTableIfNeeded;
- (id)p_parseMarkdownWithText:(id)a0;
- (id)p_linkColorWithUrlString:(id)a0;
- (id)p_linkFontWithWithUrlString:(id)a0 markdown:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)p_trackLinkClick:(id)a0 model:(id)a1;
- (id)attachmentWithTableRenderContext:(id)a0;
- (id)attachmentWithCodeBlockRenderContext:(id)a0;
- (id)attachmentWithThematicBreakRenderContext:(id)a0;
- (void)updateLinkColorForParseResult:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeInAttributedString:(id)a0 tableBlock:(id)a1;
- (id)textKitAttachmentWithBlockResult:(id)a0 tableIndex:(int)a1;
- (id)placeholderAttachmentWithBlockResult:(id)a0;
- (void)updateLinkColorForBlockResult:(id)a0;
- (id)prepareViewWithBlockResult:(id)a0 viewClass:(Class)a1;
- (id)prepareTableCollectionViewWithBlockResult:(id)a0;
- (void)didClickCopyWithString:(id)a0;
- (void)didTapLink:(id)a0 collectionView:(id)a1;
- (void).cxx_destruct;
- (id)displayMessage;

@end
