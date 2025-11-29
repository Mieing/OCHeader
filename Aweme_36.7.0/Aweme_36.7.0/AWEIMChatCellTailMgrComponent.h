@class NSString, AWEIMChatCellComponentBase, AWEIMComponentManager;
@protocol AWEIMChatCellTailAction, AWEIMChatCellTailProvider;

@interface AWEIMChatCellTailMgrComponent : AWEIMChatCellComponentBase <AWEIMComponentContainer, AWEIMComponentManagerDependency, AWEIMChatCellTailInterface>

@property (weak, nonatomic) AWEIMChatCellComponentBase<AWEIMChatCellTailProvider> *currentDisplaySubComponent;
@property (weak, nonatomic) id<AWEIMChatCellTailAction> action;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)updateComponentWhenChatUpdate:(id)a0;
- (void)onPresenter:(id)a0 willUpdateView:(id)a1;
- (id)presenterForSnapshot;
- (void)onCellWillRenderForCurrentComponent;
- (void)updateComponentWhenCellWillRender;
- (id)renderPresenter;
- (void)reloadCellTails;
- (long long)displayingTailType;
- (id)updateRenderPresenter;
- (void).cxx_destruct;

@end
