@class UIButton, UILabel, AWEPadFeedAuthorRecommendCell;
@protocol AWEMVPadAuthorRecommendFeedHeaderDelegate;

@interface AWEPadAuthorRecommendHeaderView : UICollectionReusableView

@property (retain, nonatomic) AWEPadFeedAuthorRecommendCell *authorNo1;
@property (retain, nonatomic) AWEPadFeedAuthorRecommendCell *authorNo2;
@property (retain, nonatomic) AWEPadFeedAuthorRecommendCell *authorNo3;
@property (retain, nonatomic) UIButton *changeButton;
@property (retain, nonatomic) UILabel *headerLabel;
@property (weak, nonatomic) id<AWEMVPadAuthorRecommendFeedHeaderDelegate> delegate;

- (void)changeButtonClicked:(id)a0;
- (void)configWithAuthorModels:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
