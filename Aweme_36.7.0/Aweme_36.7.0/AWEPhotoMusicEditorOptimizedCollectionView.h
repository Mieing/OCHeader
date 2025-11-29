@class NSString, UIImageView, UILabel, AWEMusicLoadingAnimationCell, UIButton;

@interface AWEPhotoMusicEditorOptimizedCollectionView : UICollectionView <ACCMusicCollectionViewProtocol>

@property (retain, nonatomic) UILabel *emptyCollectionLabel;
@property (retain, nonatomic) UIButton *retryButton;
@property (retain, nonatomic) UIImageView *loadingMoreImageView;
@property (retain, nonatomic) AWEMusicLoadingAnimationCell *animationView;
@property (copy, nonatomic) id /* block */ retryBlock;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } firstLoadingAnimationFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startFirstLoadingAnimation;
- (void)stopFirstLoadingAnimation;
- (void)hideRetryButton;
- (void)startLoadingMoreAnimating;
- (void)stopLoadingMoreAnimating;
- (void)retryButtonClicked:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (void)setupViews;
- (void)showRetryButton;

@end
