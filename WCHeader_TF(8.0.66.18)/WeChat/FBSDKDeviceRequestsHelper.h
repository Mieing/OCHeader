@class NSString;

@interface FBSDKDeviceRequestsHelper : NSObject

@property (class, readonly, copy, nonatomic) NSString *getDeviceInfo;

+ (void)initialize;
+ (BOOL)startAdvertisementService:(id)a0 withDelegate:(id)a1;
+ (BOOL)isDelegate:(id)a0 forAdvertisementService:(id)a1;
+ (void)cleanUpAdvertisementService:(id)a0;

@end
