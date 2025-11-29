@class AWEIMCommerceCouponContainerView, AWEIMFansGroupCouponModel, NSString;
@protocol AWEIMFansCouponListPageCellProtocol;

@interface AWEIMFansCouponListPageCell : UICollectionViewCell <AWEIMCommerceCouponContainerViewProtocol>

@property (retain, nonatomic) AWEIMCommerceCouponContainerView *couponView;
@property (weak, nonatomic) AWEIMFansGroupCouponModel *model;
@property (weak, nonatomic) id<AWEIMFansCouponListPageCellProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)__setupUI;
- (void)processCurrentCommerceCoupon:(id)a0;
- (void)refreshExtWithCouponModel:(id)a0;
- (void)refreshCouponStatus;
- (void)trackDisplay;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
