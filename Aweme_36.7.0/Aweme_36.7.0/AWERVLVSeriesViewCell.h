@class AWELVideoAlbumInfoModel, AWERelatedVideoPlayingAnimationView, UILabel, UIView, BDImageView;

@interface AWERVLVSeriesViewCell : UICollectionViewCell

@property (retain, nonatomic) BDImageView *coverView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *episodesContainerView;
@property (retain, nonatomic) UILabel *episodesLabel;
@property (retain, nonatomic) AWELVideoAlbumInfoModel *model;
@property (retain, nonatomic) UIView *cornerMarkView;
@property (retain, nonatomic) UILabel *cornerMarkLabel;
@property (retain, nonatomic) UIView *runningView;
@property (retain, nonatomic) AWERelatedVideoPlayingAnimationView *animationView;
@property (retain, nonatomic) UILabel *runningLabel;
@property (nonatomic) BOOL isOnPanel;

- (void)updateSelected:(BOOL)a0;
- (void)setCornerMarkLabelWithAlbumModel:(id)a0;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
