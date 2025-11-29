@interface IESECAddressServiceMonitor : NSObject

+ (void)trackEvent:(id)a0 params:(id)a1;
+ (void)trackWithCode:(unsigned long long)a0 message:(id)a1 params:(id)a2;
+ (void)trackEcGetAddressWithAddressItem:(id)a0 addressRes:(id)a1;
+ (void)trackEcSetAddressWithAddressItem:(id)a0;
+ (void)trackEcChangeAddressWithAddressItem:(id)a0;
+ (id)createTrackParams:(id)a0;

@end
