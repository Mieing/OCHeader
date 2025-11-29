@class NSMutableArray;

@interface SubscriptionExtInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *notPurchasedProductIds;
@property (retain, nonatomic) NSMutableArray *recentExpiredOrRefundedProductIds;

+ (void)initialize;

@end
