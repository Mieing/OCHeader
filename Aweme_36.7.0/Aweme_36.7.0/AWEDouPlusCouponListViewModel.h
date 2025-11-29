@class NSString, NSArray, AWEDouPlusCouponModel;

@interface AWEDouPlusCouponListViewModel : NSObject

@property (copy, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSArray *couponModelList;
@property (retain, nonatomic) AWEDouPlusCouponModel *selectedCouponModel;
@property (copy, nonatomic) NSString *couponStatusDesc;

- (long long)seletedCouponIndex;
- (BOOL)hasCouponList;
- (void)handleSelectedCouponModelAtIndex:(long long)a0;
- (long long)availableCouponCount;
- (id)couponModelAtIndex:(long long)a0;
- (void)handleSelectedCouponModel:(id)a0;
- (long long)totalCouponCount;
- (void)defaultConfigSelectedCouponModel:(id)a0;
- (void)fetchDouPlusCouponListWithIAPProduct:(id)a0;
- (void).cxx_destruct;
- (id)initWithItemID:(id)a0;

@end
