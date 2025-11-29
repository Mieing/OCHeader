@class IESECCommentSurveyManager, NSMutableDictionary, NSString, IESECCommentDetailModel, NSMutableArray;

@interface IESECCommentShowDataManager : IESECListDataController

@property (nonatomic) unsigned long long waterfallPageSize;
@property (nonatomic) unsigned long long detailPageSize;
@property (nonatomic) unsigned long long startCursor;
@property (nonatomic) unsigned long long cursor;
@property (retain, nonatomic) IESECCommentDetailModel *surveyMockData;
@property (retain, nonatomic) IESECCommentDetailModel *npsMockData;
@property (retain, nonatomic) NSMutableDictionary *lynxCardManagerDic;
@property (copy, nonatomic) NSString *productID;
@property (readonly, nonatomic) long long totalCount;
@property (retain, nonatomic) IESECCommentSurveyManager *surveyManager;
@property (retain, nonatomic) NSMutableArray *reviewDataSource;
@property (copy, nonatomic) id /* block */ dataSourceDidChanged;

+ (void)updateBuyerShowLikeWithCommentID:(id)a0 like:(BOOL)a1 completion:(id /* block */)a2;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)insertSurvey;
- (void)insertNPSLynxModel:(id)a0;
- (id)lynxCardManagerWithModel:(id)a0;
- (BOOL)removeSurvey;
- (void)loadMoreWithCompletion:(id /* block */)a0 pageSize:(unsigned long long)a1 entrance:(id)a2;
- (BOOL)shouldInsertNPSLynxModel:(id)a0;
- (void)setupLynxCardManager:(id)a0 model:(id)a1;
- (void)loadMoreInDetailPageWithCompletion:(id /* block */)a0 isUP:(BOOL)a1;
- (id)objAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithCursor:(unsigned long long)a0;
- (id)init;
- (void)addData:(id)a0;
- (void)resetData;
- (void)dealloc;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
