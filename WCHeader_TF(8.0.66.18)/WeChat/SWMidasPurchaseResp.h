@class NSString;

@interface SWMidasPurchaseResp : NSObject {
    void /* unknown type, empty encoding */ resultMsg;
    void /* unknown type, empty encoding */ appleProductID;
    void /* unknown type, empty encoding */ billID;
    void /* unknown type, empty encoding */ portalSerialID;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ user;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ content;
@property (nonatomic, readonly) NSString *resultMsg;
@property (nonatomic, readonly) NSString *appleProductID;
@property (nonatomic, readonly) NSString *billID;
@property (nonatomic, readonly) NSString *portalSerialID;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ purchaseOption;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
