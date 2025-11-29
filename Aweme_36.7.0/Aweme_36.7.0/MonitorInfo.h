@class NSString;

@interface MonitorInfo : NSObject

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *deviceID;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *hostAppID;
@property (copy, nonatomic) NSString *appVersion;

- (id)init:(id)a0 deviceID:(id)a1 channel:(id)a2 hostAppID:(id)a3 appVersion:(id)a4;
- (void).cxx_destruct;

@end
