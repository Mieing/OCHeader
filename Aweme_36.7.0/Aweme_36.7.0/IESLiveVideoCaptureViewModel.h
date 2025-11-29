@class NSString, NSMutableArray;
@protocol IESLiveVideoEffectProcessing, IESLiveMonitor;

@interface IESLiveVideoCaptureViewModel : NSObject <IESLiveAnchorRoomStatusChangeEvents>

@property (retain, nonatomic) id<IESLiveVideoEffectProcessing> videoEffectProcesser;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (nonatomic) long long uploadSuccessCount;
@property (retain, nonatomic) NSMutableArray *uploadTasks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (double)getFileSize:(id)a0;
- (void)startAnchorLiveWithRoom:(id)a0;
- (void)stopVideoUploadIfNeeded;
- (void)checkCaptureVideoIfNeeded;
- (void)uploadVideoWithFileURL:(id)a0 videoType:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)startVideoRecording;
- (id)init;
- (void)setup;

@end
