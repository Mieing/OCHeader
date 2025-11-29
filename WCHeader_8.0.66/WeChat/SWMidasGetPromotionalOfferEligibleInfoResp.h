@class NSSet, NSString;

@interface SWMidasGetPromotionalOfferEligibleInfoResp : NSObject {
    void /* unknown type, empty encoding */ purchasedAutoSubscriptionProductIDs;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ isEligibleForPromotionalOffer;
@property (nonatomic, readonly) NSSet *purchasedAutoSubscriptionProductIDs;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
