@class NSString, NSDictionary, NSMutableDictionary, TIMXSDKInstance, NSObject;
@protocol OS_dispatch_semaphore;

@interface TIMXImplManager : NSObject <TIMXStartUpTaskProtocol, TIMXInstanceScopeSingleton> {
    NSObject<OS_dispatch_semaphore> *p_proToInstanceAccessSemphore;
    NSMutableDictionary *p_proToInstanceDictLineLocks;
    TIMXSDKInstance *_r;
}

@property (copy, nonatomic) NSDictionary *protocolClassPairs;
@property (copy, nonatomic) NSDictionary *protocolClassPairsForSingleton;
@property (readonly, nonatomic) BOOL canLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)startUpOrder;
+ (void)startUpWithRootObject:(id)a0;

- (Class)getClass:(id)a0;
- (id)getImpl:(id)a0;
- (void)p_initImplInfos;
- (id)p_getImplOfSingleton:(id)a0;
- (void)p_lockProToInstanceDictLine:(id)a0;
- (void)p_unlockProToInstanceDictLine:(id)a0;
- (id)p_protocolClassInfoFromMachOWithKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
