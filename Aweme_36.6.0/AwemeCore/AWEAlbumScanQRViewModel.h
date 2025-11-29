@interface AWEAlbumScanQRViewModel : AWEAlbumBaseViewModel

- (id)initWithInputData:(id)a0;
- (BOOL)shouldSelectAlbumAsset:(id)a0;
- (void)goToNextWithMultiSelect:(BOOL)a0;
- (BOOL)needFetchAlbumAssetsWhenClickNext;
- (void)p_didSelectedToScanQR:(id)a0;

@end
