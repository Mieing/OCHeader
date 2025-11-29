@class NSString, UIView;
@protocol BDXViewContainerProtocol;

@interface AWEEcomSearchSugBannerTableViewCell : UITableViewCell

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterFromSecond;
@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *bdxLynxView;

+ (id)identifier;

- (void)configureCouponBanner;
- (void)bindUrlWithProps;
- (double)heightWithLynxView;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
