@class NSString, NSMapTable, NSHashTable;
@protocol TTVideoDataCenterProtocol, TTVideoDataAudienceProtocol;

@interface TTVideoDataCenter : NSObject <AVMDLEngineDataCenterProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSHashTable<TTVideoDataAudienceProtocol> *audiences;
@property (retain, nonatomic) NSMapTable<TTVideoDataCenterProtocol> *dataSources;

+ (void)destroy;
+ (id)defaultCenter;

- (id)getNumberValueForKey:(long long)a0 param:(id)a1 defaultValue:(id)a2;
- (id)currentEngine:(id)a0;
- (void)registerAudience:(id)a0;
- (id)billboard;
- (void)registerDataSource:(id)a0 forKey:(id)a1;
- (void)postEvent:(id)a0 param:(id)a1;
- (long long)playerCoreBuffer:(BOOL)a0 traceID:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
