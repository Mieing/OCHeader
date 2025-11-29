@class AVAsset, NSString, NSURL, NSURLSessionTask, GameHaowanAlbumVideoItem;

@interface MMAssetForGameHaowanOfVideoItem : MMAsset <MMImageLoaderObserver, GameHaowanAsset> {
    GameHaowanAlbumVideoItem *_videoItem;
    id /* block */ _imageResultBlock;
    NSURLSessionTask *_sessionTask;
}

@property (readonly, nonatomic) GameHaowanAlbumVideoItem *videoItem;
@property (retain, nonatomic) AVAsset *avAsset;
@property (retain, nonatomic) NSURL *assetURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithVideoItem:(id)a0;
- (id)title;
- (id)subtitle;
- (id)gameName;
- (id)appId;
- (BOOL)isOnlineVideo;
- (id)assetUrl;
- (id)assetId;
- (id)getThumbImage;
- (id)getThumbnail;
- (BOOL)isGif;
- (BOOL)isPicture;
- (BOOL)isVideo;
- (id)videoDuration;
- (BOOL)getIsEdited;
- (void)asyncGetThumbnail:(id /* block */)a0;
- (void)asyncGetAspectRatioThumbnailWithTargetSize:(struct CGSize { double x0; double x1; })a0 andResult:(id /* block */)a1;
- (void)requestThumbnail:(id /* block */)a0;
- (void)asyncGetVideoAssetWithBlock:(id /* block */)a0;
- (void)stopICloudActivity;
- (struct CGSize { double x0; double x1; })getImageRatioSize;
- (id)imageExifLogInfo;
- (id)getCreatedDate;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void)ImageDidLoad:(id)a0 Url:(id)a1 extraInfo:(id)a2;
- (void)dealloc;
- (void).cxx_destruct;

@end
