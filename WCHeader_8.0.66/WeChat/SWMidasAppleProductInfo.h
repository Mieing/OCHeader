@class NSString, NSArray;

@interface SWMidasAppleProductInfo : NSObject {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ displayPrice;
    void /* unknown type, empty encoding */ displayName;
    void /* unknown type, empty encoding */ productDescription;
    void /* unknown type, empty encoding */ isFamilyShareable;
    void /* unknown type, empty encoding */ currencyCode;
    void /* unknown type, empty encoding */ originalPrice;
    void /* unknown type, empty encoding */ subscriptionGroupID;
    void /* unknown type, empty encoding */ promotionalOfferInfos;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *displayPrice;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *productDescription;
@property (nonatomic, copy) NSString *isFamilyShareable;
@property (nonatomic, readonly) NSString *currencyCode;
@property (nonatomic, readonly) NSString *originalPrice;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isFromStoreKit2;
@property (nonatomic, readonly) NSString *subscriptionGroupID;
@property (nonatomic, retain) void /* unknown type, empty encoding */ introductoryOfferInfo;
@property (nonatomic, copy) NSArray *promotionalOfferInfos;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)toJSON;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
