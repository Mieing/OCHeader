@class CAKAlbumBottomViewConfig, UIButton, CAKAlbumSelectedAssetsViewConfig, UIView, CAKAlbumNavigationViewConfig;
@protocol CAKAlbumPreviewPageBottomViewProtocol, CAKAlbumPreviewPageTopViewSelectBtnProtocol, CAKSelectedAssetsViewProtocol;

@interface CAKAlbumViewModel : CAKAlbumBaseViewModel

@property (retain, nonatomic) CAKAlbumNavigationViewConfig *navigationViewConfig;
@property (retain, nonatomic) CAKAlbumBottomViewConfig *bottomViewConfig;
@property (retain, nonatomic) CAKAlbumSelectedAssetsViewConfig *selectedAssetsViewConfig;
@property (retain, nonatomic) UIView<CAKSelectedAssetsViewProtocol> *customAssetsViewForPreviewPage;
@property (retain, nonatomic) UIView<CAKSelectedAssetsViewProtocol> *customAssetsViewForListViewControler;
@property (nonatomic) double previewBottomViewHeight;
@property (nonatomic) BOOL enableBottomViewForPreviewPage;
@property (retain, nonatomic) UIView<CAKAlbumPreviewPageBottomViewProtocol> *customBottomViewForPreviewPage;
@property (nonatomic) BOOL enableSelectBtnOnTopForPreviewPage;
@property (retain, nonatomic) UIButton<CAKAlbumPreviewPageTopViewSelectBtnProtocol> *selectAssetBtnForPreviewPage;

- (unsigned long long)previewAndMultiSelectTypeWithListViewController:(id)a0;
- (id)albumListVCWithResourceType:(unsigned long long)a0;
- (long long)blankViewTypeWithResourceType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
