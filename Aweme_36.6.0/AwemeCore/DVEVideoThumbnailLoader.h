@class AVAsset, DVEVideoTrackThumbnail, NSMutableArray, NLETrackSlot_OC;
@protocol DVEVideoThumbnailLoaderDataSource, DVEImageCacheProtocol, DVEFrameGeneratorProtocol;

@interface DVEVideoThumbnailLoader : NSObject

@property (retain, nonatomic) NLETrackSlot_OC *slot;
@property (retain, nonatomic) id<DVEFrameGeneratorProtocol> generator;
@property (retain, nonatomic) AVAsset *asset;
@property (retain, nonatomic) id<DVEImageCacheProtocol> imageCache;
@property (retain, nonatomic) NSMutableArray *thumbnails;
@property (nonatomic) double previousSpeed;
@property (nonatomic) double previousTimeScale;
@property (nonatomic) struct CGSize { double width; double height; } thumbnailSize;
@property (nonatomic) long long frameTotalCount;
@property (retain, nonatomic) DVEVideoTrackThumbnail *firstThumbnail;
@property (nonatomic) BOOL allowFrameAmendMent;
@property (weak, nonatomic) id<DVEVideoThumbnailLoaderDataSource> dataSource;

- (id)getImageForKey:(id)a0;
- (id)pathForThumbnail:(id)a0;
- (BOOL)enableUseVE;
- (id)imageFromCGImage:(struct CGImage { } *)a0;
- (long long)calculateCount;
- (id)timesOfSpeed:(double)a0 scale:(double)a1;
- (id)thumbnailsOfSpeed:(double)a0 scale:(double)a1;
- (void)updateFirstThumbnail:(id)a0;
- (id)initWithSlot:(id)a0 dataSource:(id)a1;
- (void)updateSlot:(id)a0;
- (id)thumbnailAtIndex:(long long)a0;
- (long long)countConsiderSpeed:(BOOL)a0;
- (id)imageBaseKeyForSlot:(id)a0;
- (id)taskKeyForThumbnail:(id)a0;
- (void)imageOfThumbnail:(id)a0 completion:(id /* block */)a1;
- (id)closestThumbnailInCache:(id)a0;
- (long long)p_getClosestIndexWithIndex1:(long long)a0 index2:(long long)a1 targetIndex:(long long)a2;
- (id)taskOfThumbnail:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)cancelAllTasks;

@end
