@class HTSLiveEpisodeExtraInfo, HTSEventContext, NSString;
@protocol IESLiveRoomService;

@interface IESLiveMultiCameraStore : NSObject <HTSLiveMessageSubscriber, HTSLiveStreamPlayerAction, IESLiveMediaRoomActions, IESLivePaidStreamActionAdapter>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSLiveEpisodeExtraInfo *extraInfo;
@property (nonatomic) BOOL isWaitingForRequest;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) id /* block */ multiCameraChanged;
@property (copy, nonatomic) id /* block */ changeToMainCamera;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)paidStreamTrialDidPaid:(long long)a0;
- (void)paidStreamDidChangePaidStatusForOtherCamera:(id)a0 scene:(long long)a1;
- (void)onCameraWillChangeTo:(id)a0 source:(long long)a1;
- (void)onCameraChangeTo:(id)a0 source:(long long)a1;
- (void)updateMultiCameraInfoNeedTrack:(BOOL)a0 trackParameters:(id)a1 completion:(id /* block */)a2;
- (id)updateMultiCameraInfoWithEpisodeExtra:(id)a0;
- (void)updatePaidCameraStatus;
- (void)trackerVSSubCameraPullStreamFirstFrame:(id)a0;
- (void)updateMultiCameraMessage:(id)a0;
- (BOOL)needRequestFullData:(id)a0;
- (void)p_validCurCamera;
- (void)trackMultiCameraUpdateWithParams:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;
- (id)initWithRoom:(id)a0;
- (void)mount;

@end
