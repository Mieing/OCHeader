@class UIButton, UILabel;
@protocol AWEFollowListRecommendCardHeaderDelegate;

@interface AWEFollowListRecommendCardHeader : UICollectionReusableView

@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) id<AWEFollowListRecommendCardHeaderDelegate> delegate;

- (void)closeButtonClicked:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
