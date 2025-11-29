@class NSDate, UIView, AWEIMComponentManager, NSString, AWEIMWaitReplyLoadingPresenter, BDUGFlowAuthToken, NSMutableArray, YYMemoryCache, AWEIMNativeDynamicPresenter;
@protocol AWEFormatTyper;

@interface AWEIMNativeDynamicContentComponent : AWEIMFlexComponent <AWEIMComponentContainer, AWEIMComponentManagerDependency, AWEIMMenuSearchContentPluginProtocol, AWEIMNativeDynamicContentInterface, AWEIMMessageContentInterface>

@property (retain, nonatomic) NSMutableArray *waitingElementContents;
@property (retain, nonatomic) NSMutableArray *displayElements;
@property (retain, nonatomic) id<AWEFormatTyper> typer;
@property (retain, nonatomic) AWEIMWaitReplyLoadingPresenter *loadingPresenter;
@property (retain, nonatomic) AWEIMNativeDynamicPresenter *textPresenter;
@property (nonatomic) BOOL didFinishThinking;
@property (retain, nonatomic) NSDate *firstTokenTime;
@property (retain, nonatomic) YYMemoryCache *imageCache;
@property (weak, nonatomic) UIView *transitionView;
@property (nonatomic) BOOL isTypewriterFinished;
@property (retain, nonatomic) BDUGFlowAuthToken *lastAuthToken;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long scene;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (id)componentWithContext:(id)a0;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (id)zoomTransitionTargetView;
- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellVisibleLifeCycleChanged:(unsigned long long)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (id)searchAttributedString;
- (void)afterRenderCellDidFinished;
- (void)p_addKVO;
- (void)p_trackXiaoheFinishStream;
- (void)p_createTyper;
- (id)contentsDictForComponent:(id)a0 initialIndex:(long long)a1;
- (id)displayElementForComponent:(id)a0 initialIndex:(long long)a1;
- (void)updateImageCache:(id)a0 cacheKey:(id)a1;
- (id)getCacheImageWithCacheKey:(id)a0;
- (BOOL)isLastDisplayingComponent:(unsigned long long)a0;
- (void)updateZoomTransitionView:(id)a0;
- (void)refreshContentAndReloadCell;
- (void)p_interrupWithType:(long long)a0;
- (void)createPresenter;
- (void)p_updatePresenter;
- (void)p_trackThinkingFirstTokenIfNeeded;
- (void)requestStream;
- (void)p_trackXiaoheIfNeedWithEvent:(id)a0;
- (void)p_updateSubPresenters;
- (void)p_trackThinkingLastTokenIfNeeded;
- (void)p_appendElements:(id)a0;
- (id)p_calculateDiffWithCurrent:(id)a0 newElements:(id)a1;
- (BOOL)p_canMergeWithFirst:(id)a0 second:(id)a1;
- (void)p_appendElementsV2:(id)a0;
- (BOOL)p_shouldFinishTyperWithElement:(id)a0;
- (void)p_tryShowNextElement;
- (void)p_prepareTyper;
- (void)p_tryTypeElements;
- (void)p_rebuildComponents;
- (void)p_appendTextData:(id)a0 isLast:(BOOL)a1;
- (BOOL)p_isTyperTypeWithElement:(id)a0;
- (void)p_didUpdateLastContent;
- (void)p_updateThinkIfNeeded;
- (void)updateAuthToken;
- (id)p_receiverUid;
- (id)p_displayAttributedString;
- (void)p_updateProps;
- (void).cxx_destruct;
- (id)displayMessage;
- (id)messageContext;

@end
