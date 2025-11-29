@class NSString, AWEGradientView, AWEElementContainer;

@interface AWEPlayletRecommendPlayInteractionViewController : AWEPlayInteractionViewController <AWEPlayletRecommendPlayInteractionProtocol>

@property (retain, nonatomic) AWEGradientView *bottomGradientView;
@property (readonly, nonatomic) AWEElementContainer *playletRecommendBottomContainer;
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
- (Class)dispatcherManagerClassType;
- (void)setupPlayletRecommendBottomContainer;
- (void)removeAndRebuildplayletRecommendBottomContainer;
- (void).cxx_destruct;
- (void)reset;

@end
