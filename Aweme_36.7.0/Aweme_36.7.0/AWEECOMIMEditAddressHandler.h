@class BDXBridgeEventSubscriber, NSString, NSNumber;

@interface AWEECOMIMEditAddressHandler : NSObject

@property (retain, nonatomic) BDXBridgeEventSubscriber *editAddressSubscriber;
@property (copy, nonatomic) NSString *chooseAddressUrl;
@property (retain, nonatomic) NSNumber *shopId;
@property (copy, nonatomic) NSString *orderId;
@property (copy, nonatomic) id /* block */ completion;

- (void)innerEditAddress;
- (void)checkUpdateAddressWithCompletion:(id /* block */)a0;
- (void)onChooseAddress:(id)a0;
- (void).cxx_destruct;
- (void)run;

@end
