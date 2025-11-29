@class UIImage, NSString;

@interface MMPHAssetCacheObj : MMAssetForPHAssetFramework <PBCoding>

@property (retain, nonatomic) UIImage *thumbImage;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL isVideoAsset;
@property (nonatomic) BOOL isGifAsset;
@property (nonatomic) double videoAssetDuration;
@property (nonatomic) BOOL isUpdated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_identifier;
+ (void)PBArrayAdd_isVideoAsset;
+ (void)PBArrayAdd_videoAssetDuration;
+ (void)PBArrayAdd_isGifAsset;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithIdentifer:(id)a0;
- (void)onMemoryWarning;
- (id)fetchThumbImage;
- (void)updateThumbImage:(id)a0;
- (void)tryLoadPHAsset;
- (BOOL)tryUpdateAsset;
- (void)asyncGetThumbnail:(id /* block */)a0;
- (BOOL)isVideo;
- (BOOL)isGif;
- (BOOL)isPictureForIncludeGif:(BOOL)a0;
- (id)videoDuration;
- (void)getBigImageWithCompressConfig:(id)a0 ProcessBlock:(id /* block */)a1 ResultBlock:(id /* block */)a2 ErrorBlock:(id /* block */)a3;
- (void)getHighResolutionImageWithCompressConfig:(id)a0 ProcessBlock:(id /* block */)a1 ResultBlock:(id /* block */)a2 ErrorBlock:(id /* block */)a3 FaceCountBlock:(id /* block */)a4;
- (id)getThumbnail;
- (id)getThumbImage;
- (void).cxx_destruct;

@end
