@class NSString, NSMapTable;

@interface AWEDataLayerNetworkMetricsManager : NSObject <AWEDataLayerNetworkMetricsProtocol>

@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
@property (retain, nonatomic) NSMapTable *tokenToMetricsBlocksMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

@end
