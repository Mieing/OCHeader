@class WCTopicSearchContext, WCTopicSearchActionLogic, ForwardMessageLogicController, NSDictionary, NSString, GetSearchShareResponse_SearchShareContext;
@protocol WCTopicSearchViewControllerDelegate;

@interface WCTopicSearchViewController : WSHalfScreenWebSearchBaseViewController <ForwardMessageLogicDelegate>

@property (retain, nonatomic) ForwardMessageLogicController *forwardMessageLogicController;
@property (retain, nonatomic) WCTopicSearchActionLogic *shareActionLogic;
@property (retain, nonatomic) GetSearchShareResponse_SearchShareContext *shareContext;
@property (nonatomic) BOOL hasEndTranscationInVC;
@property (weak, nonatomic) id<WCTopicSearchViewControllerDelegate> delegate;
@property (retain, nonatomic) WCTopicSearchContext *context;
@property (retain, nonatomic) NSDictionary *customInitedParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0 context:(id)a1;
- (id)initWithQuery:(id)a0 customInitedParams:(id)a1;
- (id)stayTimeReporter;
- (id)initedUrlParams;
- (unsigned long long)searchScene;
- (id)defaultNavTitle;
- (void)onAppendSearchTagQuery:(id)a0;
- (void)onSetSearchTagResult:(id)a0;
- (id)getCurrentViewController;
- (void)doForwardMessageSended;
- (unsigned long long)localJSBizType;
- (void)onSearchVCAppearAction;
- (void)onSearchVCDisappearAction;
- (void)reportSearchVCAppearAction;
- (void)reportSearchVCCanceledAction;
- (void)reportSearchVCCompleteAction;
- (void)reportAppendInputQueryActionWithSessionId:(id)a0 requestId:(id)a1 searchId:(id)a2;
- (void)reportShareMsgAction:(long long)a0;
- (void)openDetailViewWithKeyword:(id)a0 params:(id)a1;
- (void).cxx_destruct;

@end
