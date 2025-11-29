@class AFDPaginatedProgressAlbumPreviewImageModel, UIColor, UIImageView, AFDPaginatedProgressALbumPreviewVideoModel, AFDPaginatedProgressALbumPreviewLivePhotoModel;

@interface AFDAlbumPreviewCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) AFDPaginatedProgressAlbumPreviewImageModel *albumImageModel;
@property (retain, nonatomic) AFDPaginatedProgressALbumPreviewVideoModel *videoCoverModel;
@property (retain, nonatomic) AFDPaginatedProgressALbumPreviewLivePhotoModel *livePhotoCoverModel;
@property (retain, nonatomic) UIColor *imageBackgroundColor;

+ (id)reuseIdentifier;

- (void)p_setupViews;
- (void)updateSelected:(BOOL)a0;
- (void)updateWithModel:(id)a0 placeholderImageForAlbum:(id)a1;
- (void)updateImageBackgroundColor:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)applyLayoutAttributes:(id)a0;

@end
