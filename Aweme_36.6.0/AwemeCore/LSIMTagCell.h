@class UILabel, LSIMTagModel;

@interface LSIMTagCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *tagLabel;
@property (weak, nonatomic) LSIMTagModel *tagModel;

- (void)configWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;

@end
