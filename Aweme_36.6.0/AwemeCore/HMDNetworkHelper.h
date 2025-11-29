@class NSString;

@interface HMDNetworkHelper : NSObject {
    BOOL _isWifiConnected;
    _Atomic BOOL _isWifiUpdated;
}

@property (class, readonly) HMDNetworkHelper *shared;

@property (readonly, nonatomic) long long connectTypeCodeForCellularDataService;
@property (readonly, nonatomic) NSString *connectTypeNameForCellularDataService;

+ (long long)currentNetQuality;
+ (id)connectTypeName;
+ (id)connectTypeNameForCellularDataService;
+ (long long)connectTypeCodeForCellularDataService;
+ (long long)connectTypeCode;
+ (id)carrierRegions;
+ (id)carrierName;
+ (id)carrierMNC;
+ (id)carrierMCC;
+ (id)currentRadioAccessTechnology;

- (id)connectTypeNameForCellularDataService;
- (long long)connectTypeCodeForCellularDataService;
- (void)__updateWifiState;
- (BOOL)__isWifiConnected;
- (id)init;

@end
