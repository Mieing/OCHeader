@class UIImageView, UIButton, UILabel;
@protocol AWECardCouponCollectionFooterViewDelegate;

@interface AWECardCouponCollectionFooterView : UICollectionReusableView

@property (retain, nonatomic) UIImageView *foldTagView;
@property (retain, nonatomic) UIButton *foldButton;
@property (retain, nonatomic) UILabel *foldDescLabel;
@property (weak, nonatomic) id<AWECardCouponCollectionFooterViewDelegate> delegate;

+ (id)identifier;

- (void)clickFold:(id)a0;
- (void)refreshWithFoldType:(long long)a0 andFoldCount:(long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
