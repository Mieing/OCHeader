@class MMAsset, NSURL, LiteAppAssetView;

@interface LiteAppAssetInfo : MMAssetInfo {
    NSURL *m_assetUrl;
}

@property (readonly, nonatomic) MMAsset *asset;
@property (readonly, nonatomic) NSURL *url;
@property (nonatomic) int index;
@property (weak, nonatomic) LiteAppAssetView *assetView;

- (id)initWithAsset:(id)a0 forIndex:(int)a1;
- (BOOL)isEqual:(id)a0;
- (long long)compareAssetInfo:(id)a0;
- (void)asyncAssetDuration:(id /* block */)a0;
- (void)asyncAssetSize:(id /* block */)a0;
- (unsigned long long)editedFileSize;
- (BOOL)isExceededOriginFileSizeLimit;
- (id)getOriginSizeLimitAlertContent;
- (BOOL)isExceededFileSizeLimit;
- (void)showOriginSizeLimitAlert;
- (void).cxx_destruct;

@end
