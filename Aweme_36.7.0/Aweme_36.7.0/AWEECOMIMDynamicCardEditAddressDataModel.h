@class NSString, BDXBridgeEventSubscriber;

@interface AWEECOMIMDynamicCardEditAddressDataModel : NSObject

@property (copy, nonatomic) NSString *chooseAddressUrl;
@property (copy, nonatomic) NSString *shopId;
@property (copy, nonatomic) NSString *orderId;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) BDXBridgeEventSubscriber *editAddressSubscriber;

- (void).cxx_destruct;

@end
