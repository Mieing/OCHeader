@class MVImageLoader, WCFinderDataItem, MMMusicFinderVideoCellModel;

@interface MVFinderAsset : MMAsset

@property (retain, nonatomic) MVImageLoader *imageLoader;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) MMMusicFinderVideoCellModel *finderVideoModel;
@property (retain, nonatomic) WCFinderDataItem *draftModel;

- (id)initWithFinderVideoModel:(id)a0;
- (id)initWithFinderDataItem:(id)a0;
- (id)assetUrl;
- (id)assetId;
- (id)getThumbImage;
- (id)coverUrl;
- (id)coverUrlToken;
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
- (id)getCreatedDate;
- (id)requestThumbnailSync:(struct CGSize { double x0; double x1; })a0;
- (void)requestThumbnail:(struct CGSize { double x0; double x1; })a0 isSync:(BOOL)a1 block:(id /* block */)a2;
- (void)getVideoDurationForDisplayWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
