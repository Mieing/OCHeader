@interface HMDNetworkReachability : NSObject

+ (BOOL)isWifiConnected;
+ (BOOL)isCellPhoneConnected;
+ (BOOL)isCellularAndWLANDisabled;
+ (BOOL)is2GConnected;
+ (BOOL)is3GConnected;
+ (BOOL)is4GConnected;
+ (BOOL)is5GConnected;
+ (BOOL)isConnected;
+ (void)startNotifier;
+ (void)stopNotifier;
+ (void)initialize;
+ (BOOL)isCellularDisabled;

@end
