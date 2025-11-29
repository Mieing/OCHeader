@class NSString, NSDictionary, IESECTracker;

@interface IESECShopGoodsAddToCartTrackingParams : NSObject

@property (retain, nonatomic) IESECTracker *tracker;
@property (nonatomic) BOOL discountSelected;
@property (nonatomic) BOOL showAddCart;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *storeSourcePage;
@property (copy, nonatomic) NSString *storeSourceMethod;
@property (copy, nonatomic) NSString *storeGroupType;
@property (copy, nonatomic) NSString *tempID;
@property (copy, nonatomic) NSString *customerID;
@property (copy, nonatomic) NSString *sourceMethodSecond;
@property (copy, nonatomic) NSDictionary *ecomShareTrackParams;
@property (copy, nonatomic) NSDictionary *passthroughParams;
@property (nonatomic) long long tabStyle;

- (void).cxx_destruct;

@end
