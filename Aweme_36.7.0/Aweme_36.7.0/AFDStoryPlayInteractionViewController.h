@class NSString, AWEElementContainer;

@interface AFDStoryPlayInteractionViewController : AWEPlayInteractionViewController <AFDStoryPlayInteractionProtocol, AFDPinchGestureRecognizable>

@property (readonly, nonatomic) AWEElementContainer *storyTopContainer;
@property (readonly, nonatomic) AWEElementContainer *storyBottomContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHide:(BOOL)a0;
- (BOOL)shouldResponseToPinchGesture:(id)a0;
- (id)subUnitsInfo;
- (void)setupContainer;
- (void)makeViewConstraints;
- (void)removeAndRebuildLeftContainer;
- (void)removeAndRebuildBottomContainer;
- (void)removeAndRebuildConstraintsAllContainers;
- (double)p_leftContainerWidth;
- (void)clearContainsWithSlideClearMode:(BOOL)a0;
- (void)makeTopViewConstraints;
- (void)makeBottomViewConstraints;
- (void)updateLeftContainerViewConstraints;
- (double)p_storyBottomContainerBottomOffset;
- (double)p_leftContainerBottomOffset;
- (double)p_rightContainerBottomOffset;
- (void)setupStoryTopContainer;
- (void)setupStoryBottomContainer;
- (void)removeAndRebuildStoryTopContainer;
- (void)removeAndRebuildStoryBottomContainer;
- (Class)elementConfigsClassType;
- (void).cxx_destruct;
- (void)reset;
- (void)handlePinchGesture:(id)a0;
- (void)_updateViewConstraints;

@end
