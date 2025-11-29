@class ImageBrowseButton, WCC2CImageBrowseButton;

@interface FavFullScreenImageButtonsContainerView : UIView

@property (retain, nonatomic) WCC2CImageBrowseButton *livePhotoBtn;
@property (retain, nonatomic) ImageBrowseButton *shareBtn;
@property (retain, nonatomic) ImageBrowseButton *downloadBtn;
@property (retain, nonatomic) ImageBrowseButton *moreBtn;
@property (copy, nonatomic) id /* block */ clickLivePhotoHandler;
@property (copy, nonatomic) id /* block */ canShowShareButton;
@property (copy, nonatomic) id /* block */ canShowDownloadButton;
@property (copy, nonatomic) id /* block */ canShowMoreButton;
@property (copy, nonatomic) id /* block */ clickShareButtonHandler;
@property (copy, nonatomic) id /* block */ clickDownloadButtonHandler;
@property (copy, nonatomic) id /* block */ clickMoreButtonHandler;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)onClickLivePhotoButton;
- (void)onShareBtnClick:(id)a0;
- (void)onDownloadBtnClick:(id)a0;
- (void)onMoreBtnClick:(id)a0;
- (void)showImageInfo:(id)a0;
- (void)hiddenButtons;
- (void).cxx_destruct;

@end
