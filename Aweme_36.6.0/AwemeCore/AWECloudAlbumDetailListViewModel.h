@class ACCCameraSubscription, NSMutableDictionary, UICollectionView, NSString, NSArray;
@protocol AWECloudAlbumDetailInputDataProtocol;

@interface AWECloudAlbumDetailListViewModel : NSObject <AWECloudAlbumDetailListServiceProtocol>

@property (weak, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) id<AWECloudAlbumDetailInputDataProtocol> data;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (retain, nonatomic) NSMutableDictionary *assetMapping;
@property (retain, nonatomic) NSString *retryAssetID;
@property (readonly, copy, nonatomic) NSArray *cellModels;
@property (readonly, copy, nonatomic) NSString *nextCursor;
@property (copy, nonatomic) id /* block */ itemStateService;
@property (readonly, nonatomic) BOOL hasMore;
@property (readonly, nonatomic) BOOL loading;
@property (readonly, nonatomic) BOOL selectable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)totalAssetsCount;
- (id)totalAssets;
- (void)enableSelectMode;
- (void)disableSelectMode;
- (void)deleteSelectedItemsWithCompletion:(id /* block */)a0;
- (id)currentRetryAssetID;
- (void)resetRetryAssetID;
- (id)initWithData:(id)a0 collectionView:(id)a1;
- (void)updateRetryAssetID:(id)a0;
- (void)notifyDidChangeSelection;
- (void)deleteAssetsWithAssets:(id)a0 completion:(id /* block */)a1;
- (void)loadWithBlock:(id /* block */)a0;
- (id)p_plusStyleCellModel;
- (void)p_setCellModels:(id)a0;
- (void)notifyDidChangeData;
- (void)p_fetch:(id)a0 complete:(id /* block */)a1;
- (void)selectAll;
- (void).cxx_destruct;
- (void)deselectAll;
- (long long)selectedCount;
- (long long)pageCount;
- (void)addSubscriber:(id)a0;
- (void)resetDataSource;
- (id)selectedAssets;

@end
