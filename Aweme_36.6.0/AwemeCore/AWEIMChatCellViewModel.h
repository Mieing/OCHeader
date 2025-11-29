@class AWEIMChatModel, AWEIMChatListCommonCell, NSString, NSMutableDictionary, NSObject, AWEIMChatCellRender, AWEIMChatCellComponentContext, AWEIMChatListControllerContext, AWEIMComponentManager;
@protocol AWEIMChatCellComponentConfigProtocol, IESIMMessageTabAsyncLoadProtocol, OS_dispatch_semaphore;

@interface AWEIMChatCellViewModel : NSObject <AWEIMComponentManagerDependency, AWEIMComponentContainer>

@property (weak, nonatomic) AWEIMChatListControllerContext *controllerContext;
@property (retain, nonatomic) AWEIMChatCellComponentContext *componentContext;
@property (retain, nonatomic) AWEIMChatModel *chat;
@property (retain, nonatomic) AWEIMChatCellRender *render;
@property (weak, nonatomic) AWEIMChatListCommonCell *currentAttachCell;
@property (nonatomic) unsigned long long lastChatHash;
@property (nonatomic) unsigned long long lastGlobalHash;
@property (nonatomic) long long cellEntryType;
@property (retain, nonatomic) NSString *belongPageIdentifier;
@property (nonatomic) BOOL enableMsgTabUIOpt;
@property (retain, nonatomic) id<AWEIMChatCellComponentConfigProtocol> config;
@property (weak, nonatomic) id<IESIMMessageTabAsyncLoadProtocol> asyncLoader;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (readonly, nonatomic) unsigned long long globalDiffHash;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } cellBodyInsets;
@property (nonatomic) BOOL disableCellSeparator;
@property (nonatomic) BOOL disableCellLongPressHighlight;
@property (nonatomic) BOOL selectedByPadSplitVC;
@property (nonatomic) BOOL needUpdateAfterAsyncBuild;
@property (retain, nonatomic) NSMutableDictionary *cellClickExtra;
@property (retain, nonatomic) NSMutableDictionary *cellShowExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;

+ (BOOL)fixAsyncBuildMultiThreadingIssue;

- (void)cellWillDisplay;
- (id)componentsNameArrayWithContext:(id)a0;
- (double)heightForCell;
- (void)invokeInAsyncQueue:(id /* block */)a0;
- (void)cellDidEndDisplay;
- (void)updateWithChat:(id)a0;
- (id)initWithChat:(id)a0 inContainer:(id)a1 cellComponentConfig:(id)a2;
- (void)buildComponentsPresenterWithAsyncTag:(BOOL)a0;
- (void)renderInCell:(id)a0;
- (void)p_setupContext;
- (id)forwardingEventTarget;
- (void)updateLayoutForPresenter:(id)a0;
- (void)buildComponentsPresenter;
- (void)updateComponentsWhenCellWillRenderWithCompletion:(id /* block */)a0;
- (void)onCellWillRenderForCurrentViewModel;
- (void)updateComponentsWhenChatUpdateWithCompletion:(id /* block */)a0;
- (void)chatDidUpdate;
- (void)p_updateRenderPresenters;
- (void)p_updateAliasSceneWithChat:(id)a0;
- (void)asyncUpdateChatIfChanged:(id)a0;
- (void)onCellDidClicked;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
