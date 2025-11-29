@class NSMutableDictionary, NSString, AWEAwemeModel, NSNumber, NSMutableArray;

@interface AWEShowPlayletRelatedPanelViewModel : AWEListDataController <AWERelatedRecommendListBaseDataControllerProtocol>

@property (retain, nonatomic) NSMutableArray *cardModels;
@property (copy) NSNumber *requestTime;
@property (retain, nonatomic) NSMutableDictionary *extraParams;
@property (retain, nonatomic) AWEAwemeModel *currentAweme;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)loadMoreWithLogExtra:(id)a0 withCompletion:(id /* block */)a1;
- (void)requestForPlayletCard:(id /* block */)a0;
- (void).cxx_destruct;

@end
