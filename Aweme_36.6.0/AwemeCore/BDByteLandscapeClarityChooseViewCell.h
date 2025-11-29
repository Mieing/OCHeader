@class BDSCClarityViewUIModel, UIView, NSArray, UILabel, BDByteScreenRecommendTagContainer, BDSCGradientView;

@interface BDByteLandscapeClarityChooseViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *clarityTitle;
@property (retain, nonatomic) BDSCGradientView *selectedGradientBackgroundView;
@property (retain, nonatomic) BDSCClarityViewUIModel *clarityViewUISetting;
@property (nonatomic) unsigned long long clarityPanelStyle;
@property (retain, nonatomic) BDByteScreenRecommendTagContainer *tagContainer;
@property (retain, nonatomic) UIView *titleContainerView;
@property (copy, nonatomic) NSArray *tagArray;

- (void)setCellSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
