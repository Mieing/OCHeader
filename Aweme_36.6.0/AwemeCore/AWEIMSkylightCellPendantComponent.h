@class AWEIMComponentBase, NSString, AWEIMComponentManager;
@protocol AWEIMSkylightBaseComponentProtocol;

@interface AWEIMSkylightCellPendantComponent : AWEIMSkylightBaseComponent <AWEIMComponentContainer, AWEIMComponentManagerDependency, AWEIMSkylightCellPendantInterface>

@property (weak, nonatomic) AWEIMComponentBase<AWEIMSkylightBaseComponentProtocol> *displayingSubComponent;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)onCellPrepareReuseForCurrentViewModel;
- (void)updateComponentAfterModelUpdate;
- (void)makeDecisionPendant:(BOOL)a0;
- (void).cxx_destruct;

@end
