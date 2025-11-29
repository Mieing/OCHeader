@class NSString, AWEMVChannelPageContext, AWEAwemeModel, NSMutableSet, AWEAwemeResponseModel;
@protocol AWEMVDataControllerProtocol;

@interface AWEMVDynamicRecommendController : AWEDCFeedBaseController <UIGestureRecognizerDelegate, AWEMVDataPluginProtocol, AWEMVEventDispatchProtocol>

@property (retain, nonatomic) id<AWEMVDataControllerProtocol> dataController;
@property (retain, nonatomic) AWEAwemeResponseModel *recommendData;
@property (retain, nonatomic) AWEAwemeModel *entranceModel;
@property (retain, nonatomic) NSMutableSet *hasBeenDynamicRecommend;
@property (nonatomic) long long enterDetailCount;
@property (nonatomic) BOOL inDetail;
@property (nonatomic) BOOL isRefreshingWhenEnterInflow;
@property (nonatomic) BOOL disableInThisInflow;
@property (nonatomic) BOOL hasRequested;
@property (nonatomic) BOOL needAvoidance;
@property (nonatomic) BOOL hasTouched;
@property (nonatomic) unsigned long long responseCountBeforeFilter;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *requestReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) AWEMVChannelPageContext *mvContext;

- (void)detailTableViewController:(id)a0 awemeModel:(id)a1 playerPlayTime:(double)a2 canPlayTime:(double)a3 totalTime:(double)a4;
- (void)detailTableViewControllerWillExit:(id)a0 currentAwemeModel:(id)a1;
- (void)willFilterResponse:(id)a0 context:(id)a1;
- (BOOL)autoAttachToDataController:(id)a0;
- (void)landscapeFeedViewController:(id)a0 awemeModel:(id)a1 playerPlayTime:(double)a2 totalPlayTime:(double)a3 canPlayTime:(double)a4 totalTime:(double)a5;
- (BOOL)enableDynamicRecommend;
- (void)onEnterDetailWithModel:(id)a0;
- (void)onExitDetailWithModel:(id)a0;
- (id)detailTriggerEvents;
- (void)onAppLogEvent:(id)a0 params:(id)a1;
- (void)onTouchesBegin:(id)a0;
- (void)onDetailModel:(id)a0 totalPlayTimeChanged:(double)a1;
- (void)requestRecommendIfNeededWithReason:(id)a0;
- (BOOL)checkIsMediumVideoSceneWithParams:(id)a0;
- (void)cancelRequestIfNeededWithReason:(id)a0;
- (void)recordDynamicRecommend:(id)a0;
- (void)trackDynamicRecommendSuccessWithValidCount:(long long)a0;
- (BOOL)shouldRequestRecommendContent;
- (void)trackDynamicRecommendCancelWithReason:(id)a0;
- (void)trackRequestRecommend;
- (void)insertRecommendContentIfNeeded;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)init;
- (void)containerViewDidLoad;

@end
