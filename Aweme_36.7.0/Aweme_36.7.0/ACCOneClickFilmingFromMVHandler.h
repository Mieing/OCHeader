@class UIControl, CAKAlbumAssetModel, CAKAlbumViewController, ACCAlbumInputData;
@protocol AWEOneClickFilmingButtonProtocol;

@interface ACCOneClickFilmingFromMVHandler : NSObject

@property (retain, nonatomic) UIControl<AWEOneClickFilmingButtonProtocol> *buttomButton;
@property (retain, nonatomic) UIControl<AWEOneClickFilmingButtonProtocol> *previewButton;
@property (weak, nonatomic) ACCAlbumInputData *inputData;
@property (weak, nonatomic) CAKAlbumViewController *albumViewController;
@property (retain, nonatomic) CAKAlbumAssetModel *currentPreviewAsset;

- (void)albumDidShowViewController:(id)a0;
- (void)albumDidDeleteAssetFromBottomView:(id)a0;
- (void)albumDidLoadPreviewControllerBottomView:(id)a0 previewAsset:(id)a1;
- (void)albumDidLoadBottomView:(id)a0;
- (void)previewControllerScrollViewDidEndDeceleratingWithAlbumAsset:(id)a0;
- (void)albumDidSelectAssetes:(id)a0;
- (void)selectedAssetsViewDidClickAsset:(id)a0;
- (void)updateButtonStateWithAssetsCount:(long long)a0;
- (id)initWithButtomButton:(id)a0 previewButton:(id)a1 inputData:(id)a2 albumViewController:(id)a3;
- (BOOL)checkAssetValid;
- (void)changeButtomButtonStatus:(id)a0;
- (void).cxx_destruct;

@end
