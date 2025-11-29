@class NSString, AWESearchSugRecommendWordsModel, AWEEcomSearchSugState, NSDictionary, NSMutableArray, UIViewController, AWEEcomSearchViewModel, AWERecommendWordQueryRecordModel;
@protocol AWEHttpTask;

@interface AWEEcomSearchSugDataManager : NSObject

@property (weak, nonatomic) id<AWEHttpTask> task;
@property (retain, nonatomic) NSMutableArray *sugHistoryArray;
@property (retain, nonatomic) NSMutableArray *dataArray;
@property (retain, nonatomic) AWEEcomSearchViewModel *searchViewModel;
@property (retain, nonatomic) AWEEcomSearchSugState *sugState;
@property (retain, nonatomic) AWESearchSugRecommendWordsModel *guessWordsModel;
@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSString *query;
@property (retain, nonatomic) AWERecommendWordQueryRecordModel *wordsQueryRecord;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (weak, nonatomic) UIViewController *referenceViewController;
@property (nonatomic) BOOL isSugFromResult;
@property (copy, nonatomic) NSString *selectedContent;
@property (retain, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSDictionary *sugExtra;
@property (nonatomic) double gapTime;
@property (copy, nonatomic) NSString *pitayaUploadInfoString;

- (void)p_handleRefreshServerTimeCost:(id)a0;
- (id)getFinalGetUrl:(id)a0 withParams:(id)a1;
- (id)getSugParamWithTextFieldParams:(id)a0;
- (void)saveSugWord:(id)a0;
- (id)getLastSearchQueryParams;
- (void)fetchSearchSugWithQuery:(id)a0 type:(unsigned long long)a1 textFieldParams:(id)a2 completion:(id /* block */)a3;
- (void)cleanSugHistory;
- (void)hasBeenSearched;
- (void).cxx_destruct;
- (id)init;

@end
