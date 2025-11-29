@class IESLLGradientView, IESLLPOIPhotoModel, UIImageView, IESLLPOIVideoPlayerView, UIView, UILabel, UIViewController;
@protocol IESLLPOIVideoPlayerDelegate;

@interface IESLLPOIHeaderContentVideoCell : IESLLPOIHeaderContentBaseCell

@property (retain, nonatomic) IESLLPOIVideoPlayerView *playerView;
@property (retain, nonatomic) IESLLPOIPhotoModel *data;
@property (retain, nonatomic) UIView *infoView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) IESLLGradientView *infoBgGradientView;
@property (nonatomic) BOOL showInfoView;
@property (nonatomic) BOOL isMaxUnfold;
@property (weak, nonatomic) UIViewController *vc;
@property (weak, nonatomic) id<IESLLPOIVideoPlayerDelegate> playerDelegate;

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
