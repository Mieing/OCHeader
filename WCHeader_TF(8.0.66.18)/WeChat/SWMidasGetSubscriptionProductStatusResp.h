@class NSSet, NSArray, NSString;

@interface SWMidasGetSubscriptionProductStatusResp : NSObject {
    void /* unknown type, empty encoding */ inSubscribedProductIDs;
    void /* unknown type, empty encoding */ notPurchasedProductIDs;
    void /* unknown type, empty encoding */ recentExpiredOrRefundedProductIDs;
}

@property (nonatomic, readonly) NSSet *inSubscribedProductIDs;
@property (nonatomic, readonly) NSSet *notPurchasedProductIDs;
@property (nonatomic, readonly) NSArray *recentExpiredOrRefundedProductIDs;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
