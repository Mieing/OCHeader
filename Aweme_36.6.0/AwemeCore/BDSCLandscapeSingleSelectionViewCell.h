@class NSArray, UILabel, BDByteScreenRecommendTagContainer, UIView;

@interface BDSCLandscapeSingleSelectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *titleContainerView;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) BDByteScreenRecommendTagContainer *tagContainer;
@property (copy, nonatomic) NSArray *tagArray;

- (void)updateCellSelected:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
