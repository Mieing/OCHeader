@class NSString, MMAssetView, NSURL, MMAsset, WCFinderAlbumScrollViewParamModel;

@interface MMAssetInfo : NSObject {
    NSURL *m_assetUrl;
}

@property (readonly, nonatomic) MMAsset *asset;
@property (retain, nonatomic) NSString *albumId;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) int index;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } previewFrame;
@property (nonatomic) BOOL isHDImage;
@property (retain, nonatomic) WCFinderAlbumScrollViewParamModel *previewScrollViewParamModel;
@property (nonatomic) BOOL bShowInfo;
@property (nonatomic) BOOL bPreSelect;
@property (nonatomic) unsigned long long originLimitSize;
@property (nonatomic) unsigned long long limitFileSize;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic) double duration;
@property (nonatomic) double livePhotoLimitDuration;
@property (weak, nonatomic) MMAssetView *assetView;

- (id)initWithAsset:(id)a0 forIndex:(int)a1;
- (BOOL)isEqual:(id)a0;
- (long long)compareAssetInfo:(id)a0;
- (void)asyncAssetDuration:(id /* block */)a0;
- (void)asyncAssetSize:(id /* block */)a0;
- (void)asyncGetLivePhotoInfo:(id /* block */)a0;
- (unsigned long long)editedFileSize;
- (BOOL)isExceededOriginFileSizeLimit;
- (id)getOriginSizeLimitAlertContent;
- (BOOL)isExceededFileSizeLimit;
- (void)showOriginSizeLimitAlert;
- (void).cxx_destruct;

@end
