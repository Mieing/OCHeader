@class AWELVideoAlbumHistoryInfoModel, AWEAwemeModel, AWEPlayInteractionRelatedVideoView, AWEAwemeResponseModel;

@interface AWEPlayInteractionRelatedVideoNewBottomElement : AWEPlayInteractionNewBottomElement

@property (retain, nonatomic) AWEPlayInteractionRelatedVideoView *relatedVideoView;
@property (retain, nonatomic) AWEAwemeModel *relatedModel;
@property (retain, nonatomic) AWEAwemeResponseModel *recommendModel;
@property (nonatomic) BOOL isRequestRelatedModel;
@property (nonatomic) long long videoPreloadTime;
@property (nonatomic) BOOL hasJumpToDetail;
@property (retain, nonatomic) AWELVideoAlbumHistoryInfoModel *history;

- (void)viewController_willDisplay;
- (void)viewController_viewDidAppear;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (BOOL)shouldAppearWithData:(id)a0;
- (long long)videoPreloadTimetamp;
- (void)tryPreLoadRelatedVideo;
- (id)getLongVideoTrackerParams:(id)a0;
- (void)preloadGuideXiguaAlertIfNeeded;
- (void)trackForPreloadRequest;
- (void)tryPreloadVideo;
- (void)tryPreloadRelatedVideos;
- (void)trackForPreloadRequestFinish;
- (void)trackListRefreshWithBeginTime:(double)a0 responseModel:(id)a1 error:(id)a2;
- (void)trackRelatedListPreload;
- (void)showRelatedVideoViewControllerWithParams:(id)a0;
- (void)jumpToRelatedDetail;
- (BOOL)shouldShowXiguaGuide;
- (void)showXiguaGuide;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (id)identifier;

@end
