@class UIImageView, UIButton, AWEOpenShareAlbumVideoModel;

@interface AWEOpenShareSelectResultCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIButton *removeButton;
@property (retain, nonatomic) AWEOpenShareAlbumVideoModel *model;
@property (copy, nonatomic) id /* block */ didRemoveCallback;

+ (id)reuseIdentifier;

- (void)configureUI:(BOOL)a0;
- (void)removePressed;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
