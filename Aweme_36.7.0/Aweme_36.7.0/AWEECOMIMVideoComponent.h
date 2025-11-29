@class UIView, AWEECOMIMCircularProgressView, AWEECOMIMVideoItemModel, AWEECOMIMPageClickUtil, UIImageView, UIControl, AWEECOMIMIndicatorView, UITableView, BDPCDDynamicCardInsetsLabel;

@interface AWEECOMIMVideoComponent : AWEECOMIMCustomBaseView

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIControl *backView;
@property (retain, nonatomic) UIImageView *playView;
@property (retain, nonatomic) BDPCDDynamicCardInsetsLabel *durationLabel;
@property (retain, nonatomic) UIImageView *durationIconView;
@property (retain, nonatomic) AWEECOMIMIndicatorView *loadingView;
@property (retain, nonatomic) AWEECOMIMCircularProgressView *progressView;
@property (retain, nonatomic) UIImageView *gradientView;
@property (retain, nonatomic) UIView *shadeView;
@property (retain, nonatomic) AWEECOMIMVideoItemModel *videoItem;
@property (copy, nonatomic) id /* block */ popMenuItems;
@property (copy, nonatomic) id /* block */ onClickPopMenu;
@property (copy, nonatomic) id /* block */ onClickComponent;
@property (copy, nonatomic) id /* block */ onClickSave;
@property (weak, nonatomic) UITableView *cellSuperView;
@property (weak, nonatomic) AWEECOMIMPageClickUtil *clickUtil;

- (void)customInitSubviewLayouts;
- (void)bindVideoItem:(id)a0;
- (void)saveVideo;
- (void)saveVideoToAlbumWithFilePathURL:(id)a0;
- (void)getVideoBasicInfoWithVid:(id)a0 apiForFetcher:(id)a1 completion:(id /* block */)a2;
- (void)configureVideoEngineIfNeeded;
- (void)coverImageDidTapAction:(id)a0;
- (void)updateVideoUIWithModelState:(long long)a0;
- (void)downloadImageAndThenSaveImageToAlbumWithVid:(id)a0 completion:(id /* block */)a1;
- (void)downloadThenSaveVideoWithVid:(id)a0 videoName:(id)a1 urlList:(id)a2 startBlock:(id /* block */)a3 progressBlock:(id /* block */)a4 finishedBlock:(id /* block */)a5;
- (void)updateProgressViewProgress:(double)a0;
- (void).cxx_destruct;
- (void)customInit;
- (void)onLongPress:(id)a0;

@end
