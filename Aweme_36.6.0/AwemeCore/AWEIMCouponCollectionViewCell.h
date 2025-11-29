@class AWEIMCouponCardView, NSString;
@protocol AWEIMCouponCollectionViewCellDelegate;

@interface AWEIMCouponCollectionViewCell : UICollectionViewCell <AWEIMCouponCardViewDelegate>

@property (retain, nonatomic) AWEIMCouponCardView *cardView;
@property (weak, nonatomic) id<AWEIMCouponCollectionViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)__setupUI;
- (void)couponCardView:(id)a0 clickedWithViewModel:(id)a1;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
