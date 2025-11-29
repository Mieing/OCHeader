@class NSMutableDictionary, NSOperationQueue, UIImage, NSLock;
@protocol DVEVideoThumbnailLoaderDataSource;

@interface DVEVideoThumbnailManager : NSObject

@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSMutableDictionary *tasks;
@property (retain, nonatomic) NSMutableDictionary *loaders;
@property (retain, nonatomic) NSMutableDictionary *handlers;
@property (retain, nonatomic) NSLock *lock;
@property (nonatomic) BOOL hasLoadPlaceholderImage;
@property (nonatomic) BOOL allowFrameAmendMent;
@property (weak, nonatomic) id<DVEVideoThumbnailLoaderDataSource> dataSource;
@property (readonly, nonatomic) UIImage *placeholderImage;

- (id)thumbnailOfSlot:(id)a0 considerSpeed:(BOOL)a1;
- (id)loaderForSlot:(id)a0;
- (void)fetchAsyncWithThumbnail:(id)a0 slot:(id)a1 completion:(id /* block */)a2;
- (id)thumbnailOfSlot:(id)a0 index:(long long)a1;
- (void)cancelWithThumbnail:(id)a0 slot:(id)a1;
- (id)fetchCacheImageWithThumbnail:(id)a0 slot:(id)a1;
- (void)fetchAsyncUseCacheFirstWithThumbnail:(id)a0 slot:(id)a1 completion:(id /* block */)a2;
- (void)cleanSlot:(id)a0;
- (id)getClosetThumbnailWithThumbnail:(id)a0 slot:(id)a1;
- (long long)countOfSlot:(id)a0 considerSpeed:(BOOL)a1;
- (void)setUpOperationQueue;
- (id)loaderKeyForSlot:(id)a0;
- (void)loadPlaceholderImageWithSlot:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
