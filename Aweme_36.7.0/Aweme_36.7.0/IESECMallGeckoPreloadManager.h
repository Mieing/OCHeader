@class NSDictionary, NSMutableDictionary;

@interface IESECMallGeckoPreloadManager : NSObject

@property (retain, nonatomic) NSDictionary *geckoPreloadConfig;
@property (retain, nonatomic) NSMutableDictionary *keyRecorderMap;

+ (id)sharedManager;

- (void)addBDXEventCenter;
- (void)triggerPrefetchWith:(id)a0 triggerSource:(id)a1 eventKey:(id)a2 channelName:(id)a3 accessKey:(id)a4;
- (id)geckoConfigKeyFromTriggerSource:(id)a0;
- (BOOL)checkTriggerValid:(id)a0 itemInfo:(id)a1;
- (id)realAccessKeyWith:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
