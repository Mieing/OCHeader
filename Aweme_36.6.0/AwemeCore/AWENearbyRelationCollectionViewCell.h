@class AWENearbyRelationView, UIImageView, UIView, AWENearbyRelationCardModel;

@interface AWENearbyRelationCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *backgroundColorView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) AWENearbyRelationView *relationView;
@property (retain, nonatomic) AWENearbyRelationCardModel *model;

- (void)__setupUI;
- (void)__layoutUI;
- (void)renderWithModel:(id)a0;
- (void)__trackEnterPersonalDetailIfNeedsWithCandidateModel:(id)a0;
- (void)__updateBottomStackViewContent;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
