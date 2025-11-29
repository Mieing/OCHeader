@class NSString, NSNumber, NSDictionary;

@interface ByteBenchConfigOC : NSObject

@property (nonatomic) int appid;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *userId;
@property (nonatomic) NSNumber *updateVersionCode;
@property (copy, nonatomic) NSString *baseUrl;
@property (copy, nonatomic) NSString *workspace;
@property (nonatomic) long long logLevel;
@property (copy, nonatomic) NSDictionary *libraInfo;
@property (copy, nonatomic) id /* block */ netTagBlock;

- (void).cxx_destruct;
- (id)init;

@end
