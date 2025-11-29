@class AWEGradientView, AWEPOIPhotoModel, UIImageView, UIViewController, UIView, UILabel, AWEPOIVideoPlayerView;
@protocol AWEPOIVideoPlayerDelegate;

@interface AWEPOIHeaderContentVideoCell : AWEPOIHeaderContentBaseCell

@property (retain, nonatomic) AWEPOIVideoPlayerView *playerView;
@property (retain, nonatomic) AWEPOIPhotoModel *data;
@property (retain, nonatomic) UIView *infoView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) AWEGradientView *infoBgGradientView;
@property (nonatomic) BOOL showInfoView;
@property (nonatomic) BOOL isMaxUnfold;
@property (weak, nonatomic) UIViewController *vc;
@property (weak, nonatomic) id<AWEPOIVideoPlayerDelegate> playerDelegate;

- (void)didEndDisplayingCell;
- (void)updateData:(id)a0 originHeight:(double)a1 completion:(id /* block */)a2;
- (void)updateUnfoldState:(BOOL)a0;
- (void)syncMuteState;
- (void)didReceiveNativeHeaderBgShowNotification;
- (void)didReceiveNativeHeaderBgHideNotification;
- (void)didReceiveCollapseToModalViewNotification;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupViews;
- (void)willDisplayCell;
- (void)setupInfoView;

@end
