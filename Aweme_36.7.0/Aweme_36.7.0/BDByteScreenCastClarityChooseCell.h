@class BDSCClarityViewUIModel, NSArray, UILabel, UIView, BDByteScreenRecommendTagContainer;

@interface BDByteScreenCastClarityChooseCell : UICollectionViewCell

@property (retain, nonatomic) UIView *backgroundCornerView;
@property (retain, nonatomic) UILabel *clarityLabel;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) BDSCClarityViewUIModel *clarityViewUISetting;
@property (retain, nonatomic) BDByteScreenRecommendTagContainer *tagContainer;
@property (retain, nonatomic) UIView *titleContainerView;
@property (copy, nonatomic) NSArray *tagArray;

- (void)buildViews;
- (void)setCellSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setTitle:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
