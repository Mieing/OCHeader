@class UIView, NSDate, NSString, AWEVideoPublishViewModel, DVEModuleManager, UIButton, DVEVCContext, AWEChooseFrameTimeLineController, DVETrackPanelContext, DVEVCContextServiceContainer;
@protocol DVEVCContextExternalInjectProtocol, ACCEditServiceProtocol, IESServiceProvider;

@interface AWEChooseFrameViewController : UIViewController <AWEChooseFrameTimelineViewDelegate>

@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) DVETrackPanelContext *trackPanelContext;
@property (retain, nonatomic) DVEVCContext *vcContext;
@property (retain, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) DVEVCContextServiceContainer *serviceContainer;
@property (retain, nonatomic) UIView *renderView;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) AWEVideoPublishViewModel *albumViewModel;
@property (retain, nonatomic) AWEChooseFrameTimeLineController *timeLineController;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) DVEModuleManager *moduleManager;
@property (retain, nonatomic) id<DVEVCContextExternalInjectProtocol> injectService;
@property (nonatomic) long long seekTime;
@property (retain, nonatomic) NSDate *enterTime;
@property (copy, nonatomic) id /* block */ hasUpdateProject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didTapBack;
- (id)nle;
- (struct CGSize { double x0; double x1; })originSize;
- (void)timelineWillBeginDragging:(id)a0;
- (void)timeline:(id)a0 didChangeTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)timelineDidEndDecelerating:(id)a0;
- (void)timelineDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)overViewTimeline:(id)a0 didChangeTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)initServiceInject:(id)a0;
- (void)tryLocateChapterPoint:(BOOL)a0 shouldAttach:(BOOL)a1;
- (void)updatePreviewSizeVideoSize:(struct CGSize { double x0; double x1; })a0;
- (void)logEnterPage;
- (void)logClickButtonWithName:(id)a0;
- (void)logLevelPageWithResult:(id)a0;
- (id)getRealImageForImage:(id)a0;
- (void)transformImage:(id)a0 withTime:(double)a1;
- (void)didTapConfirm;
- (id)initWithViewModel:(id)a0 albumViewModel:(id)a1 time:(long long)a2 editService:(id)a3;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
