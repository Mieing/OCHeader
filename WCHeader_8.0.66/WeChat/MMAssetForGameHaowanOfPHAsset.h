@class PHCachingImageManager, AVAsset, NSString, NSURL, PHAsset, GameLocalAlbumInfo;

@interface MMAssetForGameHaowanOfPHAsset : MMAsset <GameHaowanAsset> {
    PHAsset *_localAsset;
    int _videoRequestId;
    GameLocalAlbumInfo *_albumInfo;
}

@property (readonly, nonatomic) BOOL isLocalAsset;
@property (readonly, nonatomic) PHCachingImageManager *imageManger;
@property (retain, nonatomic) AVAsset *avAsset;
@property (retain, nonatomic) NSURL *assetURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPHAsset:(id)a0 albumInfo:(id)a1;
- (id)title;
- (id)subtitle;
- (id)gameName;
- (id)appId;
- (BOOL)isOnlineVideo;
- (id)videoItem;
- (id)assetUrl;
- (id)assetId;
- (id)getThumbImage;
- (id)getThumbnail;
- (id)tipForLoadingUncomplete;
- (BOOL)isGif;
- (BOOL)isPicture;
- (BOOL)isVideo;
- (id)videoDuration;
- (BOOL)getIsEdited;
- (void)asyncGetThumbnail:(id /* block */)a0;
- (void)asyncGetAspectRatioThumbnailWithTargetSize:(struct CGSize { double x0; double x1; })a0 andResult:(id /* block */)a1;
- (void)asyncGetVideoAssetWithBlock:(id /* block */)a0;
- (void)stopICloudActivity;
- (struct CGSize { double x0; double x1; })getImageRatioSize;
- (id)imageExifLogInfo;
- (id)getCreatedDate;
- (id)requestThumbnailSync:(struct CGSize { double x0; double x1; })a0;
- (void)requestThumbnail:(struct CGSize { double x0; double x1; })a0 isSync:(BOOL)a1 block:(id /* block */)a2;
- (id)formatDuration:(unsigned int)a0;
- (void).cxx_destruct;

@end
