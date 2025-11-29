@class IESLiveVideoGiftResourceModel, IESLiveRebornGiftAnimationNode;
@protocol IESLivePerfSampler;

@interface IESLiveVideoGiftPlayerMonitor : NSObject

@property (nonatomic) long long jankThreshold;
@property (nonatomic) long long bigJankThreshold;
@property (retain, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (retain, nonatomic) IESLiveRebornGiftAnimationNode *node;
@property (retain, nonatomic) IESLiveVideoGiftResourceModel *resourceModel;
@property (nonatomic) double firstFrameTime;
@property (nonatomic) double playTime;
@property (nonatomic) long long FPS;
@property (nonatomic) double startTime;
@property (nonatomic) long long frameCount;
@property (nonatomic) long long jankCount;
@property (nonatomic) double jankTime;
@property (nonatomic) long long bigJankCount;
@property (nonatomic) double bigJankTime;
@property (nonatomic) double lastFrameTime;
@property (nonatomic) double frameRangeTime;
@property (nonatomic) double avgFrameRangeTime;
@property (nonatomic) double resourceDuration;
@property (nonatomic) double surfaceWidth;
@property (nonatomic) double surfaceHeight;
@property (nonatomic) unsigned long long contentMode;
@property (nonatomic) long long playTimes;

- (void)videoGiftController:(id)a0 willPlayFrame:(id)a1;
- (void)successParseConfigResourceModel:(id)a0;
- (void)didSetAttachingDIContext;
- (void)trackVideoPlayEvent;
- (id)collectPerformanceInfo;
- (void)startPlayAnimationWithNode:(id)a0;
- (void)videoPlayerRelease;
- (void)didEndPlayingFrame:(id)a0;
- (void)didFrameCommandBufferCommitted:(id)a0 error:(id)a1;
- (void)didFinishPlay;
- (void)resetRecordState;
- (void).cxx_destruct;

@end
