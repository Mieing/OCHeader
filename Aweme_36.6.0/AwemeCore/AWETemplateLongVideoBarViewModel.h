@class AWEAwemeResponseModel, AWELVideoAlbumHistoryInfoModel, AWEAwemeModel;

@interface AWETemplateLongVideoBarViewModel : AWETemplateBaseViewModel

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEAwemeModel *relatedModel;
@property (retain, nonatomic) AWEAwemeResponseModel *recommendModel;
@property (nonatomic) BOOL isRequestRelatedModel;
@property (nonatomic) long long videoPreloadTime;
@property (nonatomic) BOOL hasJumpToDetail;
@property (retain, nonatomic) AWELVideoAlbumHistoryInfoModel *history;

+ (BOOL)shouldActiveWithData:(id)a0 scene:(unsigned long long)a1 context:(id)a2;
+ (BOOL)shouldActiveWithData:(id)a0 context:(id)a1 scene:(unsigned long long)a2 extraInfo:(id)a3;
+ (BOOL)enableLongVideoEnableTemplateBar;

- (void)viewController_viewDidAppear;
- (void)viewDidTriggerAction:(unsigned long long)a0;
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
- (id)showRelatedVideoViewControllerWithParams:(id)a0;
- (void)jumpToRelatedDetail;
- (BOOL)shouldShowXiguaGuide;
- (void)showXiguaGuide;
- (void)viewController_viewWillDisplay;
- (void)didInitialized;
- (BOOL)canCustomTrackForTemplateViewShow;
- (BOOL)canCustomTrackForTemplateViewClick;
- (void).cxx_destruct;
- (void)reset;

@end
