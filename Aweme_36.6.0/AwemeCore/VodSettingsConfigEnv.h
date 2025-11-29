@class NSString, NSDictionary;

@interface VodSettingsConfigEnv : NSObject

@property (copy, nonatomic) NSString *usEast;
@property (copy, nonatomic) NSString *sgSingapore;
@property (copy, nonatomic) NSString *cnNorth;
@property (nonatomic) long long region;
@property (copy, nonatomic) NSDictionary *appInfo;
@property (copy, nonatomic) NSDictionary *sdkInfo;
@property (readonly, copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *path;

+ (id)shareConfig;

- (id)getHost:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
