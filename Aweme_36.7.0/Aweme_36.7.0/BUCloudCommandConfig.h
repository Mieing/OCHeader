@class NSString, NSDictionary;

@interface BUCloudCommandConfig : NSObject

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSDictionary *commonParams;
@property (copy, nonatomic) NSString *uploadHost;

- (void).cxx_destruct;

@end
