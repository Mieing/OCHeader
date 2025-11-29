@class NSString;

@interface SWMidasAppleProductPromotionalOfferInfo : NSObject {
    void /* unknown type, empty encoding */ originalPrice;
    void /* unknown type, empty encoding */ displayPrice;
    void /* unknown type, empty encoding */ promotionalID;
}

@property (nonatomic, readonly) NSString *originalPrice;
@property (nonatomic, readonly) NSString *displayPrice;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ periodUnit;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ periodValue;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ periodCount;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ paymentMode;
@property (nonatomic, readonly) NSString *promotionalID;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
