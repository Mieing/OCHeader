@class NSString, NSNumber, NSMutableArray;
@protocol IESECTrendGoodsVideoManagerProtocol;

@interface IESECTrendGoodsVideoManager : AWEListDataController

@property (copy, nonatomic) NSString *awemeID;
@property (retain, nonatomic) NSNumber *sceneType;
@property (copy, nonatomic) NSString *labelName;
@property (nonatomic) long long cursor;
@property (nonatomic) long long count;
@property (copy, nonatomic) NSString *penetrateData;
@property (retain, nonatomic) NSMutableArray *requestFeedbackArray;
@property (weak, nonatomic) id<IESECTrendGoodsVideoManagerProtocol> delegate;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)calculateFilteredDataSource;
- (void)requestVideoListWithCompletionHandler:(id /* block */)a0;
- (id)initWithAwemeID:(id)a0 sceneType:(id)a1 labelName:(id)a2;
- (void)addFeedBackParams:(id)a0 index:(long long)a1;
- (void)loadMoreCardWithCompletion:(id /* block */)a0;
- (void)firstLoadWithCompletionHandler:(id /* block */)a0;
- (id)constructFeedbackString;
- (void).cxx_destruct;
- (void)reset;
- (void)refreshWithCompletion:(id /* block */)a0;
- (id)filteredDataSource;

@end
