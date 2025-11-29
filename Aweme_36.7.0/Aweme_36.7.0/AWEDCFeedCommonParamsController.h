@class NSString, NSMutableDictionary, NSMutableSet, NSMutableArray;

@interface AWEDCFeedCommonParamsController : AWEDCFeedBaseController <AWEDCFeedEventDispatcherProtocol>

@property (nonatomic) long long reqOffset;
@property (nonatomic) long long tempReqOffset;
@property (nonatomic) long long listReqCnt;
@property (nonatomic) long long templistReqCnt;
@property (nonatomic) long long reqOffsetForAction;
@property (nonatomic) long long tempReqOffsetForAction;
@property (nonatomic) long long listReqCntForAction;
@property (nonatomic) long long tempListReqCntForAction;
@property (nonatomic) long long sessionReqCnt;
@property (nonatomic) BOOL isLastFeedClicked;
@property (copy, nonatomic) NSString *latestClickedIdsString;
@property (retain, nonatomic) NSMutableArray *itemClickIdsArray;
@property (retain, nonatomic) NSMutableArray *clickModelsArray;
@property (retain, nonatomic) NSMutableDictionary *uninterestedAwemesInfo;
@property (retain, nonatomic) NSMutableDictionary *isShowingAwemesStartTime;
@property (retain, nonatomic) NSMutableArray *uninterestedAwemes;
@property (retain, nonatomic) NSMutableSet *interestedAwemes;
@property (nonatomic) long long infoCountLimits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)prefetchParamsWithArgs:(id)a0;

- (void)containerViewDidAppear:(BOOL)a0;
- (void)containerViewDidDisappear:(BOOL)a0;
- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)containerCollectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)containerCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)containerCollectionView:(id)a0 startDidSelectItemAtIndexPath:(id)a1;
- (void)onFetchListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void)onLoadMoreListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (id)customRequestParams:(id)a0 requestInfo:(struct AWEDCFeedListRequestInfo { unsigned long long x0; union { unsigned long long x0; unsigned long long x1; } x1; })a1;
- (id)getUninterestedAwemesInfoArray;
- (void)updateLatestClickIdsString;
- (id)latestUninterestedAwemesInfo;
- (id)getEnterFromPage;
- (id)getFeedAwemeGid;
- (id)latestDislikeItemsString;
- (id)latestPlayFinishedItemsString;
- (void)resumeRecordShowTime;
- (void)pauseRecordShowTime;
- (BOOL)isNeedToReportedAweme:(id)a0;
- (void)startRecordShowTime:(id)a0;
- (void)endRecordShowTime:(id)a0;
- (void)addAwemeToInterestedAwemes:(id)a0;
- (void)recordShowTime:(id)a0;
- (void)updateLatestClickedModel:(id)a0;
- (void).cxx_destruct;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (void)containerViewDidLoad;

@end
