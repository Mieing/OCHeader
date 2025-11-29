@class ACCRepositoryWorkspace, NSString, NSMutableSet, BDImageCache, NSObject;
@protocol OS_dispatch_queue;

@interface ACCSequencePreviewImageCache : NSObject <AEKMultiImageCacheProtocol>

@property (retain, nonatomic) BDImageCache *imageCache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *coverImageQueue;
@property (nonatomic) BOOL isDraft;
@property (retain, nonatomic) NSMutableSet *draftEditKeys;
@property (weak, nonatomic) ACCRepositoryWorkspace *workspace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)draftKeyByPath:(id)a0;
+ (long long)sequenceCoverImgaeEdge;

- (void)imageForProjectUUID:(id)a0 highPriority:(BOOL)a1 completion:(id /* block */)a2;
- (void)setSmallImage:(id)a0 forProjectUUID:(id)a1;
- (void)setImage:(id)a0 forProjectUUID:(id)a1;
- (id)imageCacheWithCacheKey:(id)a0;
- (id)imageCacheKeyForProjectUUID:(id)a0;
- (BOOL)containsImageForKey:(id)a0;
- (void)saveDrafteEdit:(BOOL)a0;
- (void)runOnImageQueue:(id /* block */)a0;
- (void)getImageForKey:(id)a0 highPriority:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithPath:(id)a0 isDraft:(BOOL)a1;
- (void)copyKeyFrom:(id)a0 to:(id)a1;
- (void)setImagePath:(id)a0 forProjectUUID:(id)a1;
- (void)thumbnailImageForProjectUUID:(id)a0 highPriority:(BOOL)a1 completion:(id /* block */)a2;
- (id)thumbnailImagePathForProjectUUID:(id)a0;
- (id)thumbnailImageWithImageFilePath:(id)a0;
- (void).cxx_destruct;
- (void)setMemoryCacheCountLimit:(unsigned long long)a0;
- (unsigned long long)memoryCacheCountLimit;
- (unsigned long long)memoryCacheCostLimit;
- (void)setMemoryCacheCostLimit:(unsigned long long)a0;
- (void)dealloc;
- (void)clearImageCache;
- (void)setImage:(id)a0 forKey:(id)a1;

@end
