@class AWEPOIVideoPlayerView, NSString, AWEPOIDetailPhotosPreviewBaseViewController, UILabel, AWEPOIDetailPhotoBaseInfo, UIButton;

@interface AWEPOIDetailNewVideoPreviewCell : UICollectionViewCell <AWEPOIVideoPlayerDelegate, AWEPOIDetailVideosPreviewBaseCellProtocol>

@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *indexLabel;
@property (retain, nonatomic) AWEPOIVideoPlayerView *playerView;
@property (retain, nonatomic) AWEPOIDetailPhotoBaseInfo *data;
@property (nonatomic) BOOL isFull;
@property (copy, nonatomic) id /* block */ closePageAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) AWEPOIDetailPhotosPreviewBaseViewController *vc;

- (id)zoomTransitionEndView;
- (void)adjustLayout;
- (void)fullPlayStateChange:(BOOL)a0;
- (void)progressSliderEnded:(double)a0;
- (void)muteViewClicked:(BOOL)a0;
- (void)didClickPauseIcon:(long long)a0;
- (void)adjustCloseButtonLayout;
- (void)trackerVideoOperationWithMethod:(id)a0;
- (void)updateWithPhotoInfo:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)attributedString;
- (void)didAppear;
- (long long)playerState;
- (void)layoutSubviews;
- (void)willDisappear;
- (void)setupViews;
- (void)closeButtonAction;

@end
