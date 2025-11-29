@class NSString, AWENetworkQuailityManager;

@interface AWENetworkCommonParamUtilites : NSObject <AWENetworkBusinessService>

@property (retain, nonatomic) AWENetworkQuailityManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)commonParameters;
+ (id)fetchCurrentNetworkStatus;
+ (void)teenModeDidChange;
+ (id)commonParamsWithoutL0;
+ (id)commonParamsWithURLString:(id)a0;
+ (id)hostCommonParams;
+ (id)buildCommonParams;
+ (int)getCommonParamsLockType;
+ (id)commonParamsLock;
+ (id)_commonParametersUsingSemaphore;
+ (id)_commonParametersWithoutL0UsingSemaphore;
+ (id)p_commonParamsWithURLString:(id)a0;
+ (void)commonParamsThreadInheritLock;
+ (void)commonParamsThreadInheritUnLock;
+ (id)buildCommonParamsWithoutL0;
+ (id)debugCommonParams;
+ (id)p_urlComponentDictWithString:(id)a0;
+ (Class)aAWENetworkCommonParamUtilitesCommonAdapterClass;

- (id)aAWENetworkCommonParamUtilitesCommonAdapter;
- (void).cxx_destruct;

@end
