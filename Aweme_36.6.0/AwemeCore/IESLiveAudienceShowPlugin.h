@class NSString, IESLiveAudienceContainerContext;
@protocol IESLiveRoomService;

@interface IESLiveAudienceShowPlugin : IESLiveAudiencePlugin <IESLiveVSLandscapeToLandscapeService>

@property (retain, nonatomic) IESLiveAudienceContainerContext *context;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) NSString *curTrackedPlayCameraID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reuseWithContext:(id)a0;
- (void)didLoadRoomWithReuseFlag:(BOOL)a0;
- (void)didEnterRoom:(id)a0;
- (void)didCloseRoomWithType:(unsigned long long)a0 willReuse:(BOOL)a1;
- (void)didFirstFrame:(id)a0;
- (void)didStartPlay:(id)a0;
- (void)willOrientationTransition:(long long)a0;
- (void)didOrientationTransition:(long long)a0;
- (void)enableVSLandscapeToLandscape;
- (void)disableVSLandscapeToLandscape;
- (BOOL)supportLandscapeToLandscape;
- (BOOL)isVSLandscapeToLandscapeEnable;
- (void)componentMountDidFinishForLevel:(long long)a0;
- (void)p_tryOpenPresetUrl;
- (void)didEnterInterfaceFinished:(id)a0;
- (void)trackerVSPullStreamFirstFrame;
- (void)trackMultiCameraFirstFrameIfNeeded;
- (void)trackerFirstFrameStreamStyleException;
- (void)delayDisableVSLandscapeToLandscape:(double)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)initWithContext:(id)a0;
- (void)commonInit;
- (void)dealloc;

@end
