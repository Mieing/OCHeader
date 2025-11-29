@interface AWEECOMIMDynamicCardEditAddressHandler : NSObject

+ (void)runWithDataModel:(id)a0;
+ (void)innerEditAddressWithDataModel:(id)a0;
+ (void)checkUpdateAddressWithDataModel:(id)a0 completion:(id /* block */)a1;
+ (id)editAddressSubscriberWithDataModel:(id)a0;
+ (void)onChooseAddress:(id)a0 dataModel:(id)a1;
+ (void)unregisterListener;

@end
