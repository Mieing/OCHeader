@interface BDPAddictedPreventNetworkRequest : NSObject

+ (void)updateOnlineTimeWithAppId:(id)a0 hostId:(id)a1 deviceId:(id)a2 userId:(id)a3 reportedType:(unsigned long long)a4 duration:(double)a5 timeStamp:(int)a6 completion:(id /* block */)a7;
+ (void)identityAuthenticationWithType:(long long)a0 name:(id)a1 idNumber:(id)a2 uniqueId:(id)a3 completion:(id /* block */)a4;
+ (void)confirmGuardianWithUniqueId:(id)a0 completion:(id /* block */)a1;
+ (void)requestHostAuthenticationInfoWithHeaders:(id)a0 params:(id)a1 completion:(id /* block */)a2;

@end
