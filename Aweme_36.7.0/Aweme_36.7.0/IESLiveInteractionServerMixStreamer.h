@class NSString;
@protocol IESLiveInteractionLinkerService, IESLiveInteractionServerMixStreamerDelegate;

@interface IESLiveInteractionServerMixStreamer : NSObject <IESLiveInteractionLinkerServiceAction>

@property (copy, nonatomic) NSString *linkmicId;
@property (copy, nonatomic) NSString *rtcExtInfo;
@property (weak, nonatomic) id<IESLiveInteractionLinkerService> linker;
@property (nonatomic) BOOL isRunning;
@property (copy, nonatomic) id /* block */ delayTask;
@property (weak, nonatomic) id<IESLiveInteractionServerMixStreamerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)interactionLinkerService:(id)a0 didJoinExRoomWithResult:(BOOL)a1 bizType:(long long)a2;
- (void)interactionLinkerService:(id)a0 onExRoom2UserJoined:(id)a1;
- (void)interactionLinkerService:(id)a0 onExRoom2UserLeaved:(id)a1;
- (void)interactionLinkerService:(id)a0 onExRoom2VideoStateChanged:(BOOL)a1 userId:(id)a2 reason:(long long)a3;
- (void)interactionLinkerService:(id)a0 onExRoom2AudioStateChanged:(BOOL)a1 userId:(id)a2 reason:(long long)a3;
- (void)leavePodExRtcRoom;
- (void)triggerDelayForceDowngrade;
- (void)joinPodExRtcRoom:(id)a0 rtcInfo:(id)a1;
- (void).cxx_destruct;

@end
