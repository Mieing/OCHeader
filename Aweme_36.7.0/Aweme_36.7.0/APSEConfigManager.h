@class NSMutableArray;
@protocol ConfigUpdatedProtocol;

@interface APSEConfigManager : NSObject

@property (retain, nonatomic) NSMutableArray<ConfigUpdatedProtocol> *listeners;
@property (nonatomic) BOOL isFirstRefresh;

+ (void)refreshConfigData:(id)a0;
+ (void)initConfigData;
+ (void)refreshConfigDataFromRpc;
+ (void)refreshConfigDataFromRpcWithForceConfig:(BOOL)a0;
+ (id)requestConfigData:(id)a0;
+ (id)sharedInstance;

- (void)addConfigUpdatedListener:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
