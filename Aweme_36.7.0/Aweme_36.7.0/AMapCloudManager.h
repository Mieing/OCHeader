@class NSMutableDictionary;

@interface AMapCloudManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *componentClouds;
@property (retain, nonatomic) NSMutableDictionary *components;
@property (retain, nonatomic) NSMutableDictionary *componentStatus;

+ (id)cloudConfigWithComponent:(id)a0 authKeys:(id)a1;
+ (id)cloudConfigWithAuthKey:(id)a0;
+ (void)saveCloudConfigs:(id)a0 request:(id)a1 response:(id)a2 withComponent:(id)a3 authKeys:(id)a4;
+ (id)needCheckCloud:(id)a0;
+ (void)checkCloudTimestampWithResponse:(id)a0 withRequest:(id)a1;
+ (id)sharedManager;

- (void)loadCloudConfigs;
- (id)cloudConfigWithComponent:(id)a0 authKeys:(id)a1;
- (id)cloudConfigWithAuthKey:(id)a0;
- (void)saveCloudConfigs:(id)a0 request:(id)a1 response:(id)a2 withComponent:(id)a3 authKeys:(id)a4;
- (id)needCheckCloud:(id)a0;
- (void)checkCloudTimestampWithResponse:(id)a0 withRequest:(id)a1;
- (id)lctForComponent:(id)a0;
- (id)lctInfoForComponent:(id)a0;
- (id)productForRequest:(id)a0;
- (id)lctForProduct:(id)a0;
- (id)lctInfoForProduct:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
