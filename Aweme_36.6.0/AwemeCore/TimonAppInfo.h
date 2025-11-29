@class NSString;

@interface TimonAppInfo : NSObject

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *buildNumber;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *versionCode;

- (void).cxx_destruct;

@end
