@class YYLabel, NSDictionary, AWESubChallengeModel;

@interface AWESubChallengeTitleView : UICollectionReusableView <AWESubChallengeTitleView>

@property (retain, nonatomic) YYLabel *descriptionLabel;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (copy, nonatomic) NSDictionary *descriptionLabelattribute;
@property (copy, nonatomic) NSDictionary *detailLabelAttribute;
@property (retain, nonatomic) AWESubChallengeModel *model;

+ (double)heightForHeaderOfText:(id)a0 containerWidth:(double)a1;

- (id)addToDetailLabelForText:(id)a0 isLightTheme:(BOOL)a1;
- (void)didTapDetailLabel;
- (void)configWithSubChallengeModel:(id)a0 isLightTheme:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
