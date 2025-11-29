@class UILabel, ListCategoryResponse_CategoryNode;

@interface IESLiveCategoryListCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UILabel *newTipsLabel;
@property (retain, nonatomic) ListCategoryResponse_CategoryNode *model;
@property (nonatomic) BOOL shouldShowNewTag;

+ (id)reuseIdentifier;

- (void)configIsNew:(BOOL)a0;
- (void)configSelected:(BOOL)a0;
- (void)updateCellWithModel:(id)a0 shouldShowSelected:(BOOL)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
