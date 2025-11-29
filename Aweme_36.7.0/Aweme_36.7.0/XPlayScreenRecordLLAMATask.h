@protocol CGCloudPlayer;

@interface XPlayScreenRecordLLAMATask : XPlayScreenRecordTask

@property (weak, nonatomic) id<CGCloudPlayer> cloudPlayer;

- (void)onReceiveMessageSDKMessage:(id)a0;
- (void)didCompletion:(id)a0;
- (void).cxx_destruct;
- (void)stop;
- (void)start;

@end
