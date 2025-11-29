@class AWEAwemeResponseModel, AWEAwemeModel;

@interface AWETemplateRelatedVideoBarViewModel : AWETemplateBaseViewModel

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEAwemeModel *relatedModel;
@property (retain, nonatomic) AWEAwemeResponseModel *recommendModel;
@property (nonatomic) BOOL isRequestRelatedModel;
@property (nonatomic) long long videoPreloadTime;
@property (nonatomic) BOOL hasJumpToDetail;

+ (BOOL)shouldActiveWithData:(id)a0 scene:(unsigned long long)a1 context:(id)a2;
+ (BOOL)shouldActiveWithData:(id)a0 context:(id)a1 scene:(unsigned long long)a2 extraInfo:(id)a3;

- (void)viewController_viewDidAppear;
- (void)viewDidTriggerAction:(unsigned long long)a0;
- (long long)videoPreloadTimetamp;
- (void)tryPreLoadRelatedVideo;
- (void)tryPreloadVideo;
- (void)tryPreloadRelatedVideos;
- (void)trackListRefreshWithBeginTime:(double)a0 responseModel:(id)a1 error:(id)a2;
- (void)trackRelatedListPreload;
- (void)jumpToRelatedDetail;
- (void)viewController_viewWillDisplay;
- (void)didInitialized;
- (BOOL)canCustomTrackForTemplateViewShow;
- (BOOL)canCustomTrackForTemplateViewClick;
- (void).cxx_destruct;
- (void)reset;

@end
