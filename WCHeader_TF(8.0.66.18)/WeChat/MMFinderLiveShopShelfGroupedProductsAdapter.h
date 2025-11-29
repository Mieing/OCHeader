@class NSArray, FinderLiveGetPairingTabResponse, MMFinderLiveTaskId;
@protocol MMFinderLiveShopShelfGroupedProductsAdapterDelegate;

@interface MMFinderLiveShopShelfGroupedProductsAdapter : NSObject

@property (retain, nonatomic) NSArray *viewModels;
@property (nonatomic) unsigned long long fetchType;
@property (retain, nonatomic) FinderLiveGetPairingTabResponse *data;
@property (retain, nonatomic) MMFinderLiveTaskId *taskID;
@property (weak, nonatomic) id<MMFinderLiveShopShelfGroupedProductsAdapterDelegate> delegate;

- (id)init;
- (void)onNeedRefresh;
- (void)fetchWithIsRefresh:(BOOL)a0;
- (void)onViewModelWillDisplayInIndex:(unsigned long long)a0;
- (void)onFetchSuccess:(BOOL)a0;
- (void).cxx_destruct;

@end
