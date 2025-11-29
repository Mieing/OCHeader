@class NSDictionary, NSMutableDictionary;

@interface TTAdSplashVersionCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *versionDictionary;
@property (retain, nonatomic) NSDictionary *versionInfoList;

+ (id)getVersionInfo;
+ (void)removeVersionInfoWithKey:(id)a0;
+ (id)sharedCache;
+ (void)setVersionInfo:(id)a0;

- (void).cxx_destruct;

@end
