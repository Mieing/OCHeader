@class NSString, NSDictionary, AWEAwemeModel, NSNumber, NSMutableArray;

@interface AWEGeneralSearchInnerFlowDataController : AWEListDataController <AWEGeneralSearchInnerFlowDataControllerProtocol> {
    BOOL _loadmoreHasMore;
}

@property (retain, nonatomic) NSString *requestURL;
@property (nonatomic) long long fetchCount;
@property (retain, nonatomic) NSNumber *cursor;
@property (copy, nonatomic) NSDictionary *additionalRequestParams;
@property (retain, nonatomic) Class responseModelClass;
@property (nonatomic) BOOL isLoadMore;
@property (nonatomic) BOOL hasTriggeredPitaya;
@property (retain, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (copy, nonatomic) NSDictionary *previousLogPassback;
@property (retain, nonatomic) NSString *currentSearchResultID;
@property (nonatomic) long long docType;
@property (retain, nonatomic) NSString *alaSrc;
@property (copy, nonatomic) NSString *searchID;
@property (retain, nonatomic) NSMutableArray *pitayaSceneArray;
@property (nonatomic) BOOL isSingleCard;
@property (nonatomic) BOOL isUgcChallengeScene;
@property (retain, nonatomic) NSString *outerSearchSource;
@property (nonatomic) BOOL hasShownNextItemInflow;
@property (retain, nonatomic) AWEAwemeModel *originModel;
@property (copy, nonatomic) id /* block */ currentCellIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setLoadmoreHasMore:(BOOL)a0;
- (BOOL)loadmoreHasMore;
- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)p_fetchAwemeListWithCompletion:(id /* block */)a0;
- (id)p_validateRequestParams;
- (id)p_commonRequestParams;
- (void)runPitayaTaskForInnerSearchWithResponse:(id)a0 innerSearchID:(id)a1;
- (id)buildSendBackDocsForRequest;
- (long long)searchAIAbstract;
- (BOOL)searchAvoidUserChapter;
- (void)p_trackInnerFlowPitayaMonitor:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
