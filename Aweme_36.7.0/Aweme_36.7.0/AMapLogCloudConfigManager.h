@class NSString, NSMutableDictionary;

@interface AMapLogCloudConfigManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *cloudConfigDic;
@property (retain, nonatomic) NSMutableDictionary *cloudConfigObjDic;
@property (copy, nonatomic) NSString *localConfigConfig;

+ (id)shareManager;

- (id)cloudConfigWithComponent:(id)a0;
- (id)_initSinglton;
- (void)_getCacheConfig;
- (void)setCloudConfig:(id)a0 component:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
