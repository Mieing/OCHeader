@class UIColor, NSString, CJPayBDCircularCarouselComponent, UIView;

@interface CJPayBDCircularCarouselRegionCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) CJPayBDCircularCarouselComponent *component;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) NSString *alignment;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double edgesInsetsMasLeft;
@property (nonatomic) double edgesInsetsMasRight;

- (void)makeUI;
- (void)p_updateContainerViewAlignment;
- (id)createImageView:(id)a0;
- (id)createTextLabel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reloadData:(id)a0;

@end
