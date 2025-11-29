@class NSString, UIImageView, UILabel, MJLivePhotoButton;

@interface MJImageRenderCell : UICollectionViewCell

@property (copy, nonatomic) NSString *sceneID;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) MJLivePhotoButton *livePhotoButton;

+ (id)reuseIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)updateWithSceneID:(id)a0 livePhotoConfig:(id)a1;
- (void).cxx_destruct;

@end
