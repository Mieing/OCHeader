@class UIImageView, UIView;

@interface AWENewVideoImageTemplateListCell : UICollectionViewCell

@property (retain, nonatomic) UIView *selectedIndicatorView;
@property (retain, nonatomic) UIView *coverView;
@property (retain, nonatomic) UIImageView *previewImageView;
@property (nonatomic) BOOL isSelect;

- (void)setCoverImageCornerRadius;
- (void)configCoverWith:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
