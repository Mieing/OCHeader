@class NSDictionary, IESECStorePageContext;

@interface IESECShopMomentsViewModel : NSObject

@property (nonatomic) unsigned long long apiStatus;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) unsigned long long cursor;
@property (nonatomic) BOOL hybridListEmpty;
@property (retain, nonatomic) IESECStorePageContext *pageContext;
@property (readonly, copy, nonatomic) NSDictionary *lynxGlobalProps;
@property (nonatomic) BOOL hasAutoLoadMoreOnce;

+ (BOOL)isListModelEmpty:(id)a0;
+ (void)p_requestShopMomentsDataWithParams:(id)a0 completion:(id /* block */)a1;

- (void)updateWithPreloadTabModel:(id)a0;
- (void)initFetchShopMomentsDataWithCompletion:(id /* block */)a0;
- (void)loadMoreShopMomentsDataWithCompletion:(id /* block */)a0;
- (void)requestShopMomentsDataWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
