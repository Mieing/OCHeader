@class NSString;

@interface BDPCDDynamicCardCouponModel : BDPCDDynamicCardAtomicModel

@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) NSString *price;
@property (copy, nonatomic) NSString *afterfix;
@property (copy, nonatomic) NSString *threshold;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *usageScope;
@property (copy, nonatomic) NSString *validity;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) BOOL nestUse;
@property (nonatomic) BOOL disableBorder;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
