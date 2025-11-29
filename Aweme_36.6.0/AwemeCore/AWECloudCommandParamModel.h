@class NSString;

@interface AWECloudCommandParamModel : NSObject

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *appBuildVersion;

- (void).cxx_destruct;
- (id)init;

@end
