@class IESECVideoPlayerView, NSString, IESECReviewsDetailPlayerManager, UICollectionView, UIImageView, UIView;

@interface IESECReviewsDetailCarouselCell : UICollectionViewCell <IESECReviewsDetailPlayerDelegate> {
    UIImageView *_imageView;
    UIView *_playerContainerView;
    UIImageView *_playControlImageView;
    IESECVideoPlayerView *_player;
}

@property (weak, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSString *imageURL;
@property (retain, nonatomic) IESECReviewsDetailPlayerManager *playerManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playWithVideoModel:(id)a0;
- (void)playerControlDidClick:(id)a0;
- (void)updateContainerToVisible:(unsigned long long)a0;
- (long long)outerIndexForView:(id)a0;
- (void)playerIsReadyToPlay:(id)a0;
- (void)player:(id)a0 didChangePlaybackState:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupSubviews;

@end
