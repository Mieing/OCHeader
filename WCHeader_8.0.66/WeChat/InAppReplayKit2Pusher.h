@class NSString, TRTCCloud;

@interface InAppReplayKit2Pusher : NSObject <TRTCCloudDelegate>

@property (retain, nonatomic) TRTCCloud *trtcCloud;
@property (nonatomic) BOOL isPushing;
@property (nonatomic) BOOL isStarting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTRTCCloud:(id)a0;
- (void)start;
- (void)stop;
- (void)startInAppScreenCapture;
- (void)stopInAppScreenCapture;
- (void)pausePush;
- (void)resumePush;
- (void)onAppWillResignActive:(id)a0;
- (void)onAppDidBecomeActive:(id)a0;
- (void)showRecodingStatus:(BOOL)a0;
- (void)onNetStatus:(id)a0;
- (void)onEnterRoom:(long long)a0;
- (void)onConnectionLost;
- (void)onNetworkQuality:(id)a0 remoteQuality:(id)a1;
- (void).cxx_destruct;

@end
