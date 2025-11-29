@class IESECUIImageView;

@interface IESECCommentItemImageCell : UICollectionViewCell

@property (retain, nonatomic) IESECUIImageView *imageView;
@property (retain, nonatomic) IESECUIImageView *flagImageView;

- (void)updateMediaCellWithImageModel:(id)a0 flagIcon:(id)a1;
- (void)updateMediaCellWithImageModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
