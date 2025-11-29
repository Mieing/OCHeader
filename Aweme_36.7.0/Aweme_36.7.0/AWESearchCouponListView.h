@class AWESearchMerchandiseModel, NSArray, NSMutableArray;

@interface AWESearchCouponListView : UIView

@property (retain, nonatomic) AWESearchMerchandiseModel *merchandiseModel;
@property (retain, nonatomic) NSArray *couponList;
@property (retain, nonatomic) NSMutableArray *displayMeteIDS;

- (void)logCoupon:(id)a0 couponServiceInfo:(id)a1;
- (id)getDisplayMeteIDListWith:(id)a0 maxWidth:(double)a1;
- (void)configCouponList:(id)a0 merchandiseModel:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
