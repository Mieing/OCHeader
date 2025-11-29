@class ACCCameraSubscription, NSString, UIImageView, TTVideoEngine, AWEVideoPublishViewModel;
@protocol ACCMVTemplateInteractionProtocol, ACCMVTemplateModelProtocol;

@interface ACCMVTemplateVideoPlayViewController : UIViewController <TTVideoEngineDelegate, TTVideoEngineInternalDelegate, ACCMVTemplateVideoPlayProtocol>

@property (retain, nonatomic) UIImageView *loadingPlaceholder;
@property (retain, nonatomic) TTVideoEngine *playerController;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *playIconImageView;
@property (nonatomic) BOOL pauseByTap;
@property (nonatomic) BOOL hasTrackedPlayEvent;
@property (nonatomic) BOOL hasTrackedPlayEndEvent;
@property (nonatomic) BOOL isFirstAppear;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (retain, nonatomic) id<ACCMVTemplateModelProtocol> templateModel;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (weak, nonatomic) id<ACCMVTemplateInteractionProtocol> interactionDelegate;
@property (nonatomic) BOOL skipCover;
@property (nonatomic) BOOL skipTrack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pauseWithAnimation;
- (void)playWithAnimation;
- (void)videoEngineUserStopped:(id)a0;
- (void)videoEngine:(id)a0 playbackStateDidChanged:(long long)a1;
- (void)videoEngine:(id)a0 loadStateDidChanged:(unsigned long long)a1;
- (void)videoEngineDidFinish:(id)a0 error:(id)a1;
- (void)videoEngineDidFinish:(id)a0 videoStatusException:(long long)a1;
- (void)videoEngineCloseAysncFinish:(id)a0;
- (void)videoEngineReadyToDisPlay:(id)a0;
- (void)videoEngineReadyToPlay:(id)a0;
- (void)videoEngine:(id)a0 retryForError:(id)a1;
- (void)videoEngineStalledExcludeSeek:(id)a0;
- (void)videoEngine:(id)a0 switchMediaInfoCompleted:(long long)a1;
- (void)noVideoDataToDownloadForKey:(id)a0;
- (void)didFinishVideoDataDownloadForKey:(id)a0;
- (void)trackVideoPlay;
- (void)postVideoPlayStatus:(unsigned long long)a0 withError:(id)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)viewDidLayoutSubviews;
- (void)stop;
- (void)reset;
- (void)viewDidLoad;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
