@class IESLiveInteractSessionView;
@protocol IESLiveChorusLinkerService, IESLiveChorusConcertEventDelegate;

@interface IESLiveChorusConcertEventHandler : NSObject

@property (weak, nonatomic) id<IESLiveChorusConcertEventDelegate> eventDelegate;
@property (weak, nonatomic) id<IESLiveChorusLinkerService> linker;
@property (retain, nonatomic) IESLiveInteractSessionView *mainSessionView;
@property (nonatomic) BOOL hasFirstFrame;

- (void)didSetAttachingDIContext;
- (id)initWithEventDelegate:(id)a0;
- (void)chorusLinkerServiceInteractWillStart:(id)a0;
- (void)chorusLinkerServiceInteractDidStart:(id)a0;
- (void)chorusLinkerServiceSilentInteractDidStart:(id)a0;
- (void)chorusLinkerServiceInteractDidEnd:(id)a0;
- (void)chorusLinkerServiceInteractBeforeJoinChannel:(id)a0 success:(BOOL)a1;
- (void)chorusLinkerService:(id)a0 interactReceiveError:(id)a1;
- (void)chorusLinkerService:(id)a0 newSessionCreated:(id)a1 local:(BOOL)a2 isMain:(BOOL)a3;
- (void)chorusLinkerService:(id)a0 onFirstRemoteVideoFrameDecodedOfUid:(id)a1;
- (void)chorusLinkerService:(id)a0 onDeviceLoopDelayReceived:(long long)a1;
- (void)chorusLinkerService:(id)a0 onNetworkDetectionResult:(unsigned long long)a1 quality:(unsigned long long)a2 rtt:(int)a3 lostRate:(double)a4 bitrate:(int)a5 jitter:(int)a6;
- (void)chorusLinkerService:(id)a0 onNetworkQuality:(id)a1 remoteQualities:(id)a2;
- (void).cxx_destruct;

@end
