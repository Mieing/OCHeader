@class NSDictionary, NSString, UIView;

@interface IESECDisclaimerShowConfig : NSObject

@property (nonatomic) long long promotionSource;
@property (nonatomic) long long forceShowType;
@property (nonatomic) BOOL allowThird;
@property (copy, nonatomic) NSDictionary *extraTrackerParams;
@property (weak, nonatomic) UIView *containerView;
@property (copy, nonatomic) NSString *ecomAppID;
@property (copy, nonatomic) NSDictionary *disclaimerLoginInfo;

- (id)initWithPromotionSource:(long long)a0;
- (void)setupDefaultValues;
- (void).cxx_destruct;
- (id)init;

@end
