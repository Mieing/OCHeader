@class NSString;
@protocol XPlayCameraDelegate;

@interface CGCamera : CGObject <XPlayCameraProtocol>

@property (nonatomic) long long lastPosition;
@property (weak, nonatomic) id<XPlayCameraDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)shouldLoadByItem:(id)a0 cloudPlayer:(id)a1;

- (id)initWithItem:(id)a0 cloudPlayer:(id)a1;
- (void)handleCameraMessage:(id)a0;
- (void)handleCameraPBMessage:(id)a0;
- (void)onSwitchCameraRequest;
- (void)onStartCaptureRequest:(id)a0;
- (void)onStopCaptureRequest;
- (int)pushCameraVideoFrame:(id)a0;
- (int)setVideoEncoderConfig:(id)a0;
- (void).cxx_destruct;

@end
