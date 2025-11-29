@class NSDictionary, NSMutableArray;

@interface IESECMallGeckoPreloadManager : NSObject

@property (retain, nonatomic) NSDictionary *geckoPreloadConfig;
@property (retain, nonatomic) NSMutableArray *hasPreloadKeys;

+ (id)sharedManager;

- (void)addBDXEventCenter;
- (void)triggerPrefetchWith:(id)a0 eventKey:(id)a1 channelName:(id)a2 accessKey:(id)a3;
- (id)realAccessKeyWith:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
