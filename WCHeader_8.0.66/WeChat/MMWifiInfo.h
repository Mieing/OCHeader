@class NSString;

@interface MMWifiInfo : NSObject

@property (retain, nonatomic) NSString *wifiSSID;
@property (retain, nonatomic) NSString *wifiBSSID;
@property (nonatomic) unsigned long long updateTimeInMs;

- (void)accessWifiInfo:(id *)a0 BSSID:(id *)a1;
- (void).cxx_destruct;

@end
