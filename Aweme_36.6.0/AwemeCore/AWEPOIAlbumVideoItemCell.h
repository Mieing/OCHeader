@class NSString, UIImageView, UILabel, UIView, AWEPOIDetailAwemePlayerViewController;
@protocol AWEPOIAlbumVideoItemCellDelegate;

@interface AWEPOIAlbumVideoItemCell : UICollectionViewCell <AWEPOIDetailAwemePlayerCellProtocol, AWEPOIDetailNGViewModelZoomTransitionProtocol, AWEPOIDetailNGAutoPlayUtilObjectProtocol>

@property (nonatomic) long long cellIndex;
@property (retain, nonatomic) UIView *videoBackgroundView;
@property (retain, nonatomic) UIView *infoView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *likeIcon;
@property (retain, nonatomic) UILabel *likeCountLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (weak, nonatomic) id<AWEPOIAlbumVideoItemCellDelegate> delegate;
@property (nonatomic) BOOL videoCellIsShown;
@property (retain, nonatomic) AWEPOIDetailAwemePlayerViewController *awemePlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)playerCell;
- (id)zoomTransitionView;
- (void)didTapVideoView;
- (void)configWithModel:(id)a0 index:(long long)a1 isDarkMode:(BOOL)a2;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)player;
- (id)playerView;
- (void)didResignActive;
- (id)transitionProvider;
- (void)setupUI;

@end
