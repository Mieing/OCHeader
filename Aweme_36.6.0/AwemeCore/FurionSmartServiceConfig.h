@class NSString, FurionSmartSceneMonitorConfig, FurionSmartServicePortraitFilter, FurionSmartServiceBlockTimeFilter, NSDictionary;

@interface FurionSmartServiceConfig : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) FurionSmartServiceBlockTimeFilter *blockTimeFilter;
@property (retain, nonatomic) FurionSmartServicePortraitFilter *portraitFilter;
@property (retain, nonatomic) FurionSmartSceneMonitorConfig *monitor;
@property (nonatomic) BOOL enableLock;
@property (retain, nonatomic) NSString *sceneName;
@property (retain, nonatomic) NSString *modelName;
@property (nonatomic) long long realNextCount;
@property (retain, nonatomic) NSDictionary *configMap;
@property (nonatomic) BOOL enableNewCommonService;

- (id)getBlockTimeFilter;
- (id)getPortraitFilter;
- (void)doLock;
- (void)doUnlock;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
