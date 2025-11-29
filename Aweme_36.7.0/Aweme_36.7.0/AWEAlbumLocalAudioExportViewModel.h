@class AWELocalAudioExportAlbumPreviewBottomView, CAKAlbumAssetModel, AWELocalAudioExportAlbumBottomView;
@protocol ACCSelectedAssetsBottomViewProtocol, CAKAlbumPreviewPageBottomViewProtocol;

@interface AWEAlbumLocalAudioExportViewModel : AWEAlbumBaseViewModel

@property (retain, nonatomic) CAKAlbumAssetModel *currentPreviewAsset;
@property (retain, nonatomic) AWELocalAudioExportAlbumBottomView<ACCSelectedAssetsBottomViewProtocol> *bottomView;
@property (retain, nonatomic) AWELocalAudioExportAlbumPreviewBottomView<CAKAlbumPreviewPageBottomViewProtocol> *bottomViewInPreview;

- (double)heightForBottomView;
- (id)initWithInputData:(id)a0;
- (BOOL)shouldSelectAlbumAsset:(id)a0;
- (void)goToNextWithMultiSelect:(BOOL)a0;
- (void)trackPreviewControllerScrollViewDidEndDeceleratingWithAlbumAsset:(id)a0;
- (void)trackPreviewControllerDidLoadForAlbumAsset:(id)a0;
- (BOOL)needFetchAlbumAssetsWhenClickNext;
- (void)updateBottomNextButtonWithButton:(id)a0 fromPreview:(BOOL)a1;
- (void)updateSelectedAssets:(id)a0;
- (double)heightForPreviewBottomView;
- (BOOL)validateAssetDuration:(id)a0;
- (double)p_convertVideoDuration:(id)a0;
- (void).cxx_destruct;

@end
