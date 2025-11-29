@class AWECutSameTipView, ACCOneKeyMvEntranceAlbumBottomView;
@protocol ACCSelectedAssetsBottomViewProtocol;

@interface AWEAlbumOneKeyMvViewModel : AWEAlbumBaseViewModel

@property (retain, nonatomic) ACCOneKeyMvEntranceAlbumBottomView<ACCSelectedAssetsBottomViewProtocol> *bottomView;
@property (retain, nonatomic) AWECutSameTipView *tipView;

- (id)initWithInputData:(id)a0;
- (BOOL)validAssetModelForVideo:(id)a0;
- (BOOL)shouldSelectAlbumAsset:(id)a0;
- (void).cxx_destruct;
- (id)footerTitle;

@end
