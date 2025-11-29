@class HTSEventContext, NSString;

@interface IESLiveAudienceInteractGuestConnectionTracker : NSObject <HTSLiveRoomRemoteActions, IESLiveSocialInteractPreLoadExAction, IESLiveRevenueInteractAction, IESLiveInteractionLinkerServiceAction, IESLiveMultiInteractUserServiceDelegate>

@property (retain, nonatomic) HTSEventContext *eventContext;
@property (nonatomic) double guestConnectionStart;
@property (copy, nonatomic) NSString *functionType;
@property (copy, nonatomic) NSString *functionType2;
@property (nonatomic) unsigned long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackWithEvent:(id)a0 extra:(id)a1;
- (void)startRevenueInteractWithScene:(unsigned long long)a0;
- (void)didCloseLiveRoomWithDuration:(double)a0;
- (void)currentFlattenSceneDidChangedFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void)interactionLinkerService:(id)a0 serverUserListDidChangeFrom:(id)a1 to:(id)a2;
- (void)onActiveListDidChangeFrom:(id)a0 to:(id)a1;
- (id)initWithEventContext:(id)a0 diContext:(id)a1 scene:(unsigned long long)a2;
- (void)pr_trackGuestConnectionDuration;
- (void)pr_trackGuestConnectionShow;
- (void)pr_trackGuestConnectionDurationWithFunctionType:(id)a0 functionType2:(id)a1;
- (void)pr_trackGuestConnectionShowWithFunctionType:(id)a0 functionType2:(id)a1;
- (void)trackSocialInteractEndWithScene:(unsigned long long)a0;
- (void)trackSocialInteractStartWithScene:(unsigned long long)a0;
- (BOOL)disableTrackSceneStartByScene:(unsigned long long)a0;
- (BOOL)disableTrackSceneEndByScene:(unsigned long long)a0;
- (BOOL)disableTrackListChange;
- (long long)activeListCountNeedToTrack;
- (void)trackGuestConnectionFromLayoutSwitched;
- (void)trackGuestConnectionFromLayoutSwitchedFromLayout:(id)a0 toLayout:(id)a1;
- (void).cxx_destruct;
- (void)setup;

@end
