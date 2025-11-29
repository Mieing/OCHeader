@interface CachalotCollectionViewConfig : NSObject

@property (nonatomic) BOOL useLayoutIfNeededMode;
@property (nonatomic) BOOL enableFixIOS17ReloadData;
@property (nonatomic) BOOL safePerformBatchUpdates;
@property (nonatomic) BOOL useSerialOperationMode;
@property (nonatomic) BOOL useNewUpdateHeightTransaction;
@property (nonatomic) BOOL forceLayoutAfterPerformBatchUpdates;
@property (nonatomic) BOOL forceLayoutAfterReloadWhenNilWindow;
@property (nonatomic) BOOL useSeparateRenderDataSource;

- (id)init;

@end
