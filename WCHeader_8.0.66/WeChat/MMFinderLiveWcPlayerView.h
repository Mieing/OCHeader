@class MMFinderLiveTask, NSString, MMFinderLiveWcPlayerViewModel, MMFinderLiveTaskId, UIView, NSObject, WCPlayerView;
@protocol WCPlayerControlProtocol;

@interface MMFinderLiveWcPlayerView : UIView <MMLiveContainerDisplayViewProtocol>

@property (retain, nonatomic) WCPlayerView *playerView;
@property (retain, nonatomic) UIView *blurBackgroundView;
@property (retain, nonatomic) NSObject<WCPlayerControlProtocol> *controlModel;
@property (nonatomic) BOOL isInMinimizeMode;
@property (nonatomic) unsigned int initialPlayTime;
@property (nonatomic) BOOL autoplay;
@property (retain, nonatomic) NSString *groupName;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (readonly, nonatomic) MMFinderLiveTask *liveTask;
@property (retain, nonatomic) MMFinderLiveWcPlayerViewModel *viewModel;
@property (retain, nonatomic) NSString *audioManagerGroupName;
@property (readonly, nonatomic) UIView *minimizeSrcView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } minimizeSrcFrame;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } playerPresentationSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 audioManagerGroupName:(id)a1;
- (void)dealloc;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)layoutSubviews;
- (void)startPlay;
- (void)stopPlay;
- (void)pause;
- (void)resumePlay;
- (void)mute;
- (void)unMute;
- (void)prepareForMaximizeMode;
- (void)prepareForMinimizeMode;
- (void)forceLayout;
- (void)updatePlaySrcPath;
- (void)setPlayerContentMode:(long long)a0;
- (void)setupPlayerView;
- (void)updatePlayerViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getNormalizedMinimizeSrcFrameForBusiness:(long long)a0;
- (id)getExtendTransitionContainerBackView;
- (void)updateViewModel:(id)a0;
- (void).cxx_destruct;

@end
