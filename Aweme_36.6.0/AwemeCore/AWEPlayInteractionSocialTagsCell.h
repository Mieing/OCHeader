@class UIImageView, UILabel, UIView;

@interface AWEPlayInteractionSocialTagsCell : UICollectionViewCell

@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (copy, nonatomic) id /* block */ onClickContentView;

- (void)__setupUI;
- (void)__onClickContentView;
- (void)updateSocialTagsCellWithIconURL:(id)a0 tagLabelText:(id)a1 shouldShowArrow:(BOOL)a2;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
