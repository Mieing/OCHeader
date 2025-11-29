@class NSString, AVAsset;

@interface MMAssetForLocalVideo : MMAsset

@property (retain, nonatomic) NSString *localAssetId;
@property (retain, nonatomic) NSString *localFilePath;
@property (retain, nonatomic) AVAsset *avAsset;

- (id)initWithUrl:(id)a0 IsNeedOrigin:(BOOL)a1;
- (id)initWithAssetId:(id)a0 localFilePath:(id)a1 isNeedOrigin:(BOOL)a2;
- (id)assetId;
- (id)assetUrl;
- (id)assetFileName;
- (BOOL)isPicture;
- (BOOL)isGif;
- (BOOL)isVideo;
- (BOOL)isSlowMotionVideo;
- (BOOL)isTimeLapseVideo;
- (id)getThumbImage;
- (id)getThumbImageWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)getThumbnail;
- (void)asyncGetThumbnail:(id /* block */)a0;
- (void)asyncGetThumbnail:(id /* block */)a0 progress:(id /* block */)a1;
- (id)_getAssetImage;
- (id)_getAssetImageWithMaxSize:(struct CGSize { double x0; double x1; })a0 cropToSquare:(BOOL)a1;
- (id)_convertImage:(id)a0 toMaxSize:(struct CGSize { double x0; double x1; })a1 cropToSquare:(BOOL)a2;
- (id)getVideoUrl;
- (id)videoDuration;
- (void)asyncGetVideoAssetWithBlock:(id /* block */)a0;
- (void)asyncGetVideoAsset:(BOOL)a0 withBlock:(id /* block */)a1;
- (void)asyncGetVideoAsset:(BOOL)a0 successBlock:(id /* block */)a1 errorBlock:(id /* block */)a2;
- (void)_asyncGetVideoAsset:(BOOL)a0 successBlock:(id /* block */)a1 errorBlock:(id /* block */)a2;
- (void).cxx_destruct;

@end
