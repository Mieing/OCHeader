@class UIImageView, UILabel, IESECRelationRecommendTitleObject, UIView;

@interface IESECRelationRecommendTitleCell : UICollectionViewCell {
    IESECRelationRecommendTitleObject *_model;
    UIView *_containerView;
}

@property (retain, nonatomic) UIImageView *leftBar;
@property (retain, nonatomic) UIImageView *rightBar;
@property (retain, nonatomic) UILabel *titleLabel;

- (void)bindWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
