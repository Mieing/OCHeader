@class CTTelephonyNetworkInfo;

@interface UANetworkDiagnose : NSObject

@property (nonatomic) float osVersion;
@property (nonatomic) struct __SCNetworkReachability { } *reachabilityRef;
@property (retain, nonatomic) CTTelephonyNetworkInfo *telephonyNetworkInfo;

+ (id)carrierConvertWithString:(id)a0 option:(unsigned long long)a1;
+ (id)generationConvertWithString:(id)a0 option:(unsigned long long)a1;
+ (id)reachabilityConvertWithString:(id)a0 option:(unsigned long long)a1;

- (BOOL)isReachableByFlags:(unsigned int)a0;
- (BOOL)isCellularProvidersPrivateIPv6:(id)a0;
- (BOOL)isChinaMobilePrivateIPv6:(id)a0;
- (BOOL)isChinaUnicomPrivateIPv6:(id)a0;
- (BOOL)isChinaTelecomPrivateIPv6:(id)a0;
- (id)telephonyNetworkInfoPerformGetterWithName:(id)a0;
- (id)telephonyNetworkInfoPerformInstanceWithName:(id)a0;
- (id)reachableType;
- (id)privateIPv6ToCarrierName:(id)a0;
- (id)generationInfo;
- (id)networkCarrierNameWithCellularProviders:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (unsigned int)reachabilityFlags;
- (void)dealloc;
- (id)carrierInfo;

@end
