@class AWEIMEditedAssetModel, NSString, UIImageView, UIActivityIndicatorView, PHAsset, NSIndexPath, AWEIMPlayVideoAnimationPauseIcon;
@protocol AWEIMAssetBrowserCollectionViewCellDelegate, IESIMVideoPlayerWrapperProtocol;

@interface AWEIMVideoBrowserCollectionViewCell : UICollectionViewCell <IESIMVideoPlayerWrapperDelegate, AWEIMAssetBrowserCollectionViewProtocol>

@property (retain, nonatomic) UIActivityIndicatorView *indicatorView;
@property (retain, nonatomic) UIImageView *posterImageView;
@property (retain, nonatomic) id<IESIMVideoPlayerWrapperProtocol> player;
@property (retain, nonatomic) PHAsset *asset;
@property (copy, nonatomic) NSString *videoUrl;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (nonatomic) BOOL isPlayed;
@property (retain, nonatomic) AWEIMPlayVideoAnimationPauseIcon *playButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEIMAssetBrowserCollectionViewCellDelegate> assetTapDelegate;
@property (weak, nonatomic) AWEIMEditedAssetModel *editedModel;

+ (id)identifier;

- (id)transitionEndView;
- (void)playerWrapper:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)contentViewSingleTapped:(id)a0;
- (void)resetPlayerIfNeed;
- (void)observePosterImageChange;
- (void)configAssetInfoAfterFetchVideoURLAsset:(id)a0 videoCoverImage:(id)a1;
- (void)setEnablePlayHDR:(BOOL)a0;
- (void)playWithUrl:(id)a0;
- (void)asset:(id)a0 loadHDRFlag:(id /* block */)a1;
- (void)doPauseIconAnimationIfNeededWithHidden:(BOOL)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
