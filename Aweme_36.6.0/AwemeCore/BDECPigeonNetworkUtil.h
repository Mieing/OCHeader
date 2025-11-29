@interface BDECPigeonNetworkUtil : NSObject

+ (long long)networkReachabilityStatus;
+ (BOOL)validateResponse:(id)a0;
+ (id)messageFromResponse:(id)a0;
+ (long long)codeFromResponse:(id)a0;
+ (long long)networkCellularConnectionType;
+ (id)finalParamsWithParams:(id)a0 requestCommonParamsBlock:(id /* block */)a1;

@end
