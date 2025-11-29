@class ACCModernAutoCaptionStyleDataHelper, ACCModernAutoCaptionBizHelper, AWEVideoPublishViewModel, NSTimer;
@protocol ACCAutoCaptionProcessorDelegate;

@interface ACCAutoCaptionProcessor : NSObject

@property (nonatomic) BOOL isProcessing;
@property (retain, nonatomic) ACCModernAutoCaptionBizHelper *bizHelper;
@property (retain, nonatomic) ACCModernAutoCaptionStyleDataHelper *styleHelper;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (retain, nonatomic) NSTimer *progressTimer;
@property (nonatomic) double progressStartTime;
@property (nonatomic) long long currentStage;
@property (nonatomic) double currentStageEstimatedDuration;
@property (weak, nonatomic) id<ACCAutoCaptionProcessorDelegate> delegate;

- (void)trackEvent:(id)a0 extraParams:(id)a1;
- (void)startProgressForStage:(long long)a0 estimatedDuration:(double)a1;
- (void)prepareTemplateStyleWithRepository:(id)a0 audioSourceType:(long long)a1 forceReload:(BOOL)a2;
- (long long)findTemplateIndexWithTemplateId:(id)a0;
- (void)startCaptionRecognitionWithAudioSourceType:(long long)a0 forceReload:(BOOL)a1;
- (void)clearProgressTimer;
- (void)updateProgress:(double)a0 stage:(long long)a1;
- (void)handleSuccess:(id)a0;
- (void)startCaptionRecognitionWithRepository:(id)a0 audioSourceType:(long long)a1 forceReload:(BOOL)a2;
- (void)cancelCurrentTask;
- (void).cxx_destruct;
- (void)startLoading;
- (void)handleError:(id)a0;
- (void)finishLoading;

@end
