@class IESLiveImageView;

@interface IESLiveNewAudienceWindowRecommendCell : UICollectionViewCell

@property (retain, nonatomic) IESLiveImageView *productImageView;
@property (retain, nonatomic) IESLiveImageView *iconView;

- (void)p_render;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithModel:(id)a0;

@end
