@class NSString, AWEIMComponentManager;

@interface AWEIMChatCellCombinedTailComponent : AWEIMChatCellComponentBase <AWEIMChatCellTailProvider, AWEIMComponentContainer, AWEIMComponentManagerDependency, AWEIMComponentLifeCycle>

@property (nonatomic) BOOL hasUnRead;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)updateComponentWhenChatUpdate:(id)a0;
- (void)onCellWillRenderForCurrentComponent;
- (void)updateComponentWhenCellWillRender;
- (long long)currentComponentTailType;
- (id)updateRenderPresenter;
- (void).cxx_destruct;

@end
