@class NSMutableDictionary;

@interface BDPreloadMonitor : NSObject

@property (retain, nonatomic) NSMutableDictionary *sceneInfos;
@property (retain, nonatomic) NSMutableDictionary *trackInfos;

+ (void)trackPreloadWithKey:(id)a0 scene:(id)a1 error:(id)a2;
+ (void)trackPreloadWithKey:(id)a0 scene:(id)a1 trafficSize:(long long)a2 error:(id)a3 extra:(id)a4;
+ (void)trackPreloadWithKey:(id)a0 scene:(id)a1;
+ (void)trackPreloadWithKey:(id)a0 scene:(id)a1 trafficSize:(long long)a2 extra:(id)a3;
+ (void)push:(id)a0;
+ (void)popAll;
+ (id)sharedInstance;
+ (void)pop:(id)a0;

- (void)trackPreloadWithKey:(id)a0 scene:(id)a1 trafficSize:(long long)a2 error:(id)a3 extra:(id)a4;
- (void)monitor;
- (void)push:(id)a0;
- (void).cxx_destruct;
- (void)popAll;
- (id)init;
- (void)startMonitor;
- (void)pop:(id)a0;

@end
