@class AWEIMCommerceCouponContainerView, AWEIMFansGroupCouponContentProps, NSString;

@interface AWEIMFansGroupCouponContentView : UIView <AWEIMCommerceCouponContainerViewProtocol>

@property (retain, nonatomic) AWEIMFansGroupCouponContentProps *props;
@property (retain, nonatomic) AWEIMCommerceCouponContainerView *couponView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)processCurrentCommerceCoupon:(id)a0;
- (void)refreshExtWithCouponModel:(id)a0;
- (void)enterprsieTrack;
- (void)refreshCouponStatus;
- (void)updateWithProps:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
