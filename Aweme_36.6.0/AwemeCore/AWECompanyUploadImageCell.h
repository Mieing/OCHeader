@class UIImageView, UIView, UILabel, UIButton;

@interface AWECompanyUploadImageCell : UICollectionViewCell

@property (retain, nonatomic) UIView *uploadContentView;
@property (retain, nonatomic) UIView *imageContentView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UILabel *uploadTextLabel;
@property (nonatomic) long long maxUploadImageCount;

- (void)p_setupUploadContentView;
- (void)p_setupImageContentView;
- (void)updateImage:(id)a0 forRow:(long long)a1;
- (void)updateUploadStyleWithCount:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
