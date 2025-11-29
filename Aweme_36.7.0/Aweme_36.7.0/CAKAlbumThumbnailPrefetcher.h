@class CAKAlbumThumbnailPrefetcherInputData, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CAKAlbumThumbnailPrefetcher : NSObject

@property (retain, nonatomic) NSMutableDictionary *resultMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *startQueue;
@property (nonatomic) BOOL didStart;
@property (readonly, nonatomic) CAKAlbumThumbnailPrefetcherInputData *inputData;
@property (readonly, nonatomic) struct CGSize { double width; double height; } cacheSize;

+ (long long)prefetchCountWithColumnCount:(long long)a0;

- (id)initWithInputData:(id)a0;
- (void)startPrefetchWithPreferredColumnCount:(long long)a0 usingRevertDisplayingOrder:(BOOL)a1;
- (id)cacheKeyForAsset:(id)a0;
- (id)preloadModelWithAsset:(id)a0;
- (void)addFetchTaskWithAsset:(id)a0 preloadModel:(id)a1;
- (BOOL)hasPreloadTaskForAsset:(id)a0;
- (void)setPreloadResultHandlerWithAsset:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)isValid;
- (void)photoLibraryDidChange:(id)a0;
- (void)dealloc;

@end
