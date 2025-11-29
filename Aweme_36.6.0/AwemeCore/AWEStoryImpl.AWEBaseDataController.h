@class NSMutableArray;

@interface AWEStoryImpl.AWEBaseDataController : AWEListDataController <AWEBaseDataArrayDataObserver> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_baseDataSource;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ context;
}

@property (nonatomic, retain) NSMutableArray *dataSource;

- (void)dataDidChangeInArray:(id)a0;
- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
