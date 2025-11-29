@class IESLLGradientView, IESLLGDAlbumPhotoInfo, UIImageView, UILabel;

@interface IESLLGDAlbumPhoto : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) IESLLGradientView *labelMask;
@property (retain, nonatomic) IESLLGradientView *photoMask;
@property (retain, nonatomic) UILabel *label;
@property (nonatomic) long long photoIndex;
@property (copy, nonatomic) id /* block */ didTap;
@property (retain, nonatomic) IESLLGDAlbumPhotoInfo *photo;

- (void)photoTapAction;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithModel:(id)a0;
- (id)photoImage;

@end
