@class NSString, UIImageView, UIImage, UILabel, UIView;

@interface WCEditFilterCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *filterImageView;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIImageView *toolView;
@property (retain, nonatomic) UILabel *filterNameLabel;
@property (retain, nonatomic) UIImage *filterImage;
@property (copy, nonatomic) NSString *filterName;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)showMaskView:(BOOL)a0 toolView:(BOOL)a1;
- (void).cxx_destruct;

@end
