@class NSString, AWEElementContainer;

@interface AWEImmersivePlayInteractionViewController : AWEPlayInteractionViewController <AWEImmersivePlayInteractionProtocol>

@property (readonly, nonatomic) AWEElementContainer *immersiveBottomContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHide:(BOOL)a0;
- (id)subUnitsInfo;
- (void)setupContainer;
- (void)makeViewConstraints;
- (void)removeAndRebuildConstraintsAllContainers;
- (void)setupBottomContainer;
- (void)setupLeftContainer;
- (void)setupRightContainer;
- (void)clearContainsWithSlideClearMode:(BOOL)a0;
- (Class)elementConfigsClassType;
- (BOOL)loadElementContainerByProvider;
- (void)setupImmersiveBottomContainer;
- (void)removeAndRebuildImmersiveBottomContainer;
- (Class)dispatcherManagerClassType;
- (void).cxx_destruct;
- (void)reset;

@end
