@interface HMDNetworkSpeedData : NSObject

@property (nonatomic) double uploadSpeed_WIFI;
@property (nonatomic) double downloadSpeed_WIFI;
@property (nonatomic) double uploadSpeed_cellular;
@property (nonatomic) double downloadSpeed_cellular;
@property (nonatomic) double actualAverageTime;
@property (nonatomic, getter=isCellularAvailable) BOOL cellularAvailable;
@property (nonatomic, getter=isWIFIAvailable) BOOL WIFIAvailable;

+ (id)stringlizationOfSpeed:(double)a0;

@end
