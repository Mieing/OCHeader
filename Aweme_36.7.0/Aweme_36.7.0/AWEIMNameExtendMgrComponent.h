@class AWEIMCellComponentBase, NSString, AWEIMComponentManager;

@interface AWEIMNameExtendMgrComponent : AWEIMChatCellComponentBase <AWEIMComponentContainer, AWEIMComponentManagerDependency, AWEIMNameExtendInterface>

@property (weak, nonatomic) AWEIMCellComponentBase *currentDisplaySubComponent;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)updateComponentWhenChatUpdate:(id)a0;
- (void)onPresenter:(id)a0 willUpdateView:(id)a1;
- (void)onCellWillRenderForCurrentComponent;
- (void)updateComponentWhenCellWillRender;
- (id)renderPresenter;
- (void)refreshNameExtend;
- (id)updateRenderPresenter;
- (void)p_arrangeSubComponent;
- (void).cxx_destruct;

@end
