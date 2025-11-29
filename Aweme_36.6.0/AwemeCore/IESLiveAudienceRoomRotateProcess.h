@class NSString, IESLiveAudienceContainerContext;
@protocol IESLiveAudienceRoomRotateDelegate, IESLiveAudienceRoomAwareness;

@interface IESLiveAudienceRoomRotateProcess : NSObject <HTSLiveOrientationActions, HTSLiveAudienceActions>

@property (weak, nonatomic) id<IESLiveAudienceRoomRotateDelegate> delegate;
@property (nonatomic) long long orientationUpdating;
@property (nonatomic) long long orientationUpdated;
@property (retain, nonatomic) IESLiveAudienceContainerContext *containerContext;
@property (retain, nonatomic) id<IESLiveAudienceRoomAwareness> audienceAwareness;
@property (nonatomic) long long enteredRoomOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)onOrientationTransitionBegin:(long long)a0;
- (id)topViewControllerForController:(id)a0;
- (void)didForceUpdateToOrientation:(long long)a0;
- (void)liveWillEndWithReason:(unsigned long long)a0;
- (void)onOrientationTransitionEnd;
- (id)initWithContainerContext:(id)a0 delegate:(id)a1;
- (void)animationInAutoRotating;
- (void)resetLandscapeSceneWith:(long long)a0;
- (BOOL)shouldAutorotateIniPadARModeWithVC:(id)a0;
- (void)autoRotateAnimationWithCoordinator:(id)a0 size:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;

@end
