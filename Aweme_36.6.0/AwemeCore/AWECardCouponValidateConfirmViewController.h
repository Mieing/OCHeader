@class AWECouponValidateDetail, NSString;

@interface AWECardCouponValidateConfirmViewController : UIViewController

@property (retain, nonatomic) AWECouponValidateDetail *couponDetail;
@property (copy, nonatomic) NSString *actionType;

- (void)cancelDidTap;
- (void)confirmDidTap;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;

@end
