@interface IESECAddressServiceNetworking : NSObject

+ (void)fetchSessionAddressWithAddressId:(id)a0 addressType:(long long)a1 completion:(id /* block */)a2;
+ (void)reportAddressWithAddress:(id)a0 eventType:(unsigned long long)a1 completion:(id /* block */)a2;
+ (void)fetchCurrentAddressWithChangeType:(unsigned long long)a0 addressInfo:(id)a1 completion:(id /* block */)a2;
+ (BOOL)gpsOn;
+ (id)convertChangeTypeToStr:(unsigned long long)a0;
+ (void)reportGetAddressNetError:(id)a0 changeType:(unsigned long long)a1;
+ (id)convertResponseToServiceModel:(id)a0 serverTime:(long long)a1;
+ (id)convertEventTypeToStr:(unsigned long long)a0;

@end
