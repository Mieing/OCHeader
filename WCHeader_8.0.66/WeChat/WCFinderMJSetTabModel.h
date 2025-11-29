@class NSString, NSArray, WCFinderMJSetTabDataFetcher, NSMutableArray;
@protocol WCFinderMJSetTabModelDelegate;

@interface WCFinderMJSetTabModel : NSObject <WCFinderMJSetTabDataFetcherExt>

@property (retain, nonatomic) WCFinderMJSetTabDataFetcher *dataFetcher;
@property (retain, nonatomic) NSMutableArray *mutContentVMS;
@property (weak, nonatomic) id<WCFinderMJSetTabModelDelegate> delegate;
@property (nonatomic) int commentScene;
@property (copy, nonatomic) NSString *tabId;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *dataScene;
@property (readonly, nonatomic) NSArray *contentVMS;
@property (readonly, nonatomic) unsigned long long dataFetchTime;
@property (readonly, nonatomic) unsigned long long dataLoadedState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)ensureFirstPage;
- (void)requestFirstPage:(id /* block */)a0;
- (void)requestNextPage;
- (id)createListViewModelWithDataScene:(id)a0;
- (id)createContentVMFromDataItems:(id)a0;
- (void)flushProviderDataItem;
- (id)contentVMAtIndex:(long long)a0;
- (id)contentVMWithTid:(id)a0;
- (long long)indexOfTid:(id)a0;
- (void)deleteContentVMWithIndex:(unsigned long long)a0;
- (void)onDataFetcherAppendDataAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)onDataFetcherStateChagned;
- (void).cxx_destruct;

@end
