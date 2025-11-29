@class BDUGFlowAuthToken, AWEIMTextMessage, NSDictionary, IESIMWaitingReplyLoadingView, NSString;
@protocol AWEIMNativeDynamicContentInterface;

@interface AWEIMInnerQuoteBlockComponent : AWEIMFlexComponent <AWEIMInnerMessageContentComponentProtocol>

@property (weak, nonatomic) id<AWEIMNativeDynamicContentInterface> contentService;
@property (retain, nonatomic) AWEIMTextMessage *subMessage;
@property (copy, nonatomic) NSDictionary *attributes;
@property (retain, nonatomic) IESIMWaitingReplyLoadingView *loadingView;
@property (retain, nonatomic) BDUGFlowAuthToken *lastAuthToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)afterRenderCellDidFinished;
- (BOOL)enableDisplay;
- (void)didUpdateContent;
- (id)displayAttributedContent;
- (void)updateAuthToken;
- (id)p_receiverUid;
- (void)p_updateProps;
- (void)appendEllipsisContentIfNeed;
- (void)parseMarkdownIfCan;
- (void)appendLoadingIfNeed;
- (void)p_optimizeForBlockQuoteStyle:(id)a0;
- (id)getLoadingStrWithFont:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
