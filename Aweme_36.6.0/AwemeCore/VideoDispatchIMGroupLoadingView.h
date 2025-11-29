@class UICollectionView, NSString, SkeletonLoaderView;

@interface VideoDispatchIMGroupLoadingView : UIView <IESIMLoadingViewProtocol>

@property (retain, nonatomic) SkeletonLoaderView *skeletonAnimationView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissWithAnimated:(BOOL)a0;
- (void)setupSkeletonViewWithRow:(long long)a0 andRowHeight:(double)a1;
- (void)stopAnimating;
- (void)startAnimating;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
