@class ACCOneKeyMvEntranceAlbumBottomView, AWEAlbumMVCutSameViewModel, UIView, AWEMVDetailResponseModel, AWECutSameTipView;
@protocol ACCLoadingViewProtocol, ACCSelectedAssetsBottomViewProtocol;

@interface AWEAlbumOneKeyAnchorViewModel : AWEAlbumBaseViewModel

@property (retain, nonatomic) ACCOneKeyMvEntranceAlbumBottomView<ACCSelectedAssetsBottomViewProtocol> *bottomView;
@property (retain, nonatomic) AWEAlbumMVCutSameViewModel *cutSameViewModel;
@property (retain, nonatomic) AWECutSameTipView *tipView;
@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) AWEMVDetailResponseModel *mvDetail;

- (void)albumViewControllerDidLoad:(id)a0;
- (id)initWithInputData:(id)a0;
- (BOOL)validAssetModelForVideo:(id)a0;
- (BOOL)shouldSelectAlbumAsset:(id)a0;
- (void)updateSelectedAssets:(id)a0;
- (void)loadTemplateDetail;
- (void)switchToCutSame:(id)a0;
- (void).cxx_destruct;
- (id)footerTitle;
- (id)bottomButton;

@end
