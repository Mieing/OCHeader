@class NSString, AWEIMChatCellComponentBase, AWEIMComponentManager;
@protocol AWEIMChatCellTailProvider;

@interface AWEIMChatCellCombinedTailUnReadManagerComponent : AWEIMChatCellComponentBase <AWEIMComponentContainer, AWEIMComponentManagerDependency, AWEIMChatCellCombinedTailUnReadInterface>

@property (weak, nonatomic) AWEIMChatCellComponentBase<AWEIMChatCellTailProvider> *currentDisplaySubComponent;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)updateComponentWhenChatUpdate:(id)a0;
- (void)onPresenter:(id)a0 willUpdateView:(id)a1;
- (id)presenterForSnapshot;
- (void)onCellWillRenderForCurrentComponent;
- (void)updateComponentWhenCellWillRender;
- (void)reloadUnReadComponent;
- (void).cxx_destruct;

@end
