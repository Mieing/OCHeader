@class _TtC9FlowAVSDK27FlowAVSessionVideoDialogMsg;

@interface FlowAVSDK.FlowAVSessionVideoSessionStarted : NSObject

@property (nonatomic) long long cameraStatus;
@property (nonatomic) long long screenStatus;
@property (nonatomic, retain) _TtC9FlowAVSDK27FlowAVSessionVideoDialogMsg *dialogMsg;

- (id)initWithCameraStatus:(long long)a0 screenStatus:(long long)a1 dialogMsg:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
