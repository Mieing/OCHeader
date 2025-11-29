@class AWEDetailNewTrendVideoControlButton, UIImageView, UIImage, UILabel, UIView, NSDictionary;

@interface AWEDetailNewTrendVideoItemCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coverPhotoView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UIImageView *likePhotoView;
@property (retain, nonatomic) UILabel *likeCountLabel;
@property (retain, nonatomic) UIView *playVideoView;
@property (retain, nonatomic) UIImage *coverPhoto;
@property (copy, nonatomic) NSDictionary *videoUrlInfo;
@property (retain, nonatomic) AWEDetailNewTrendVideoControlButton *videoControlButton;
@property (retain, nonatomic) UIView *videoControlSplitView;
@property (nonatomic) BOOL isNeedDynamicCalculateColorStatus;
@property (copy, nonatomic) id /* block */ videoItemCellNeedDynamicCalculateColorActionBlock;
@property (copy, nonatomic) id /* block */ videoItemCellClickVideoControlActionBlock;

- (void)handleIsSkeletonModeStatus:(BOOL)a0;
- (void)handleCoverPhotoUrlsChange:(id)a0;
- (void)setupVideoControlUI;
- (void)clickVideoControlAction;
- (void)handleVideoUrlInfoChange:(id)a0;
- (void)handleAvatarUrlsChange:(id)a0;
- (void)handleUserNameChange:(id)a0;
- (void)handleLikeCountContent:(id)a0;
- (void)dynamicCalculateColor:(id /* block */)a0;
- (void)trendVideoItemCellPlayVideoActionBlock:(id /* block */)a0;
- (void)handleVideoControlStatus:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
