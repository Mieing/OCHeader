@class NSString, UIImageView, TTVideoEngine, AFDInspirationTabItem;
@protocol AFDFriendsTabTemplateDetailVideoPlayViewControllerDelegate;

@interface AFDFriendsTabTemplateDetailVideoPlayViewController : UIViewController <TTVideoEngineDelegate, TTVideoEngineInternalDelegate>

@property (retain, nonatomic) TTVideoEngine *playerController;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *playIconImageView;
@property (retain, nonatomic) AFDInspirationTabItem *item;
@property (nonatomic) BOOL hasTrackedPlayEvent;
@property (nonatomic) BOOL pauseByTap;
@property (weak, nonatomic) id<AFDFriendsTabTemplateDetailVideoPlayViewControllerDelegate> delegate;
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
- (void)postFriendsTabDetailTemplateDidFinishVideoDataDownloadNotification;
- (void)updateWithItem:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)viewDidLayoutSubviews;
- (void)stop;
- (void)reset;
- (void)viewDidLoad;
- (void)setupViews;

@end
