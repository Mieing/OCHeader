@class NSString, CAKAlbumAssetModel, UIScrollView, NSCache;

@interface CAKAlbumPreviewAndSelectCell : UICollectionViewCell <CAKAssetEditResultObserver>

@property (retain, nonatomic) UIScrollView *zoomScrollView;
@property (retain, nonatomic) CAKAlbumAssetModel *assetModel;
@property (weak, nonatomic) NSCache *coverImageCache;
@property (copy, nonatomic) id /* block */ fetchIcloudCompletion;
@property (copy, nonatomic) id /* block */ scrollViewDidZoomBlock;
@property (copy, nonatomic) id /* block */ scrollViewDidEndZoomBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didEndDisplayingCell;
- (void)setPlayerLayer:(id)a0 withPlayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)removeCoverImageView;
- (void)assetEditResultDidChange;
- (void)willAppearCellWithAsset:(id)a0 withPlayFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 greyMode:(BOOL)a2;
- (void)configCellWithAsset:(id)a0 withViewModel:(id)a1 withPlayFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 greyMode:(BOOL)a3;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willDisplayCell;

@end
