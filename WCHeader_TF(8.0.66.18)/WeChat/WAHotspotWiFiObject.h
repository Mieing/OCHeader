@class NSString, NEHotspotNetwork;

@interface WAHotspotWiFiObject : MMObject

@property (readonly, nonatomic) NSString *SSID;
@property (readonly, nonatomic) NSString *BSSID;
@property (readonly, nonatomic) BOOL secure;
@property (copy, nonatomic) NSString *password;
@property (readonly, nonatomic) NEHotspotNetwork *hotspotNetwork;
@property (readonly, nonatomic) double signalStrength;
@property (readonly, nonatomic) double rssi;
@property (readonly, nonatomic) BOOL autoJoined;
@property (readonly, nonatomic) BOOL justJoined;

+ (id)wifiWithSSID:(id)a0;
+ (id)wifiWithSSID:(id)a0 BSSID:(id)a1 password:(id)a2;
+ (id)wifiWithHotspotNetwork:(id)a0;

- (id)initWithSSID:(id)a0;
- (id)initWithSSID:(id)a0 BSSID:(id)a1 password:(id)a2;
- (id)initWithHotspotNetwork:(id)a0;
- (id)description;
- (id)wifiDictionaryObject;
- (id)prefillBSSIDForiOS:(id)a0;
- (void).cxx_destruct;

@end
