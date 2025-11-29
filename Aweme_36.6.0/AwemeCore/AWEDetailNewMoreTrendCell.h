@class AWEDetailNewMoreTrendCellModel, AWEDetailNewMoreTrendBottomInfoView, UIImageView, AWEDetailNewMoreTrendBottomShootwayView, UIView, AWEGradientView, NSString;

@interface AWEDetailNewMoreTrendCell : UICollectionViewCell <AWEDetailCollectionAutoPlayableCell>

@property (retain, nonatomic) AWEDetailNewMoreTrendCellModel *cellModel;
@property (retain, nonatomic) UIImageView *coverPhotoView;
@property (retain, nonatomic) UIView *playVideoView;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) AWEDetailNewMoreTrendBottomInfoView *bottomInfoView;
@property (retain, nonatomic) AWEDetailNewMoreTrendBottomInfoView *overlayCoverPhotoBottomInfoView;
@property (retain, nonatomic) AWEDetailNewMoreTrendBottomShootwayView *bottomShootwayView;
@property (copy, nonatomic) id /* block */ didSelectItemActionBlock;
@property (retain, nonatomic) AWEGradientView *maskGradientView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)autoPlayModel;
- (void)handleAvatarsChange:(id)a0;
- (void)handleTitleChange:(id)a0;
- (void)handleSubTitleChange:(id)a0;
- (void)configShootwayStyle;
- (void)displayBottomInfoViewIfNeeded;
- (void)displayBottomShootwayViewIfNeeded;
- (void)clickItemAction;
- (void)bindCellModel:(id)a0;
- (void)handleCoverPhotoChange:(id)a0;
- (void)handleDidShootwayActionBlockChange:(id /* block */)a0;
- (void)handleDidSelectItemActionBlockChange:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)canAutoPlay;
- (void)setupUI;
- (id)playerContainerView;

@end
