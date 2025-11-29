@class AWEIMFansGroupCouponModel, NSString;

@interface AWEIMCouponListItemViewModel : NSObject

@property (retain, nonatomic) AWEIMFansGroupCouponModel *couponModel;
@property (readonly, copy, nonatomic) NSString *price;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *recommendIconName;

- (id)discountWithDecimalPointIfNecessary:(id)a0;
- (id)creditsWithDecimalPointIfNecessary:(id)a0;
- (void).cxx_destruct;

@end
