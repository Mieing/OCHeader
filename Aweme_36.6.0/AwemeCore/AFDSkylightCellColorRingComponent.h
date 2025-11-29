@class NSString, AFDSkylightBaseComponent, AWEIMComponentManager;
@protocol AWEIMSkylightBaseComponentProtocol;

@interface AFDSkylightCellColorRingComponent : AFDSkylightBaseComponent <AWEIMComponentManagerDependency, AWEIMComponentContainer, AWEIMSkylightCellColorRingInterface>

@property (weak, nonatomic) AFDSkylightBaseComponent<AWEIMSkylightBaseComponentProtocol> *displayingSubComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)onCellPrepareReuseForCurrentViewModel;
- (void)updateComponentAfterModelUpdate;
- (void)makeColorRingDecisionWithReload:(BOOL)a0;
- (void).cxx_destruct;

@end
