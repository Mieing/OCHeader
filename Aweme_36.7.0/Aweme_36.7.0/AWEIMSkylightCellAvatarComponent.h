@class NSString, AWEIMComponentManager, AWEIMSkylightBaseComponent;

@interface AWEIMSkylightCellAvatarComponent : AWEIMSkylightBaseComponent <AWEIMSkylightCellComponentEvent, AWEIMSkylightCellAvatarInterface, AWEIMComponentManagerDependency, AWEIMComponentContainer>

@property (weak, nonatomic) AWEIMSkylightBaseComponent *displayingSubComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)onCellPrepareReuseForCurrentViewModel;
- (void)updateComponentAfterModelUpdate;
- (void)skyCellWillDisplay;
- (void)skyCellDidEndDisplay;
- (void)imUserDidChange;
- (void)makeAvatarDecisionWithReload:(BOOL)a0;
- (void)stopAvatarAnimationIfNeed;
- (void)startAvatarAnimationIfNeed;
- (void).cxx_destruct;
- (id)avatarView;

@end
