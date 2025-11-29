@class UIImageView, UILabel, CKGenericTemplateModel;

@interface ACCEditTextModeTemplateSelectCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *innerLabel;
@property (retain, nonatomic) CKGenericTemplateModel *model;

- (void)configWithModel:(id)a0;
- (void)addInnerView;
- (void)configWithSelected:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
