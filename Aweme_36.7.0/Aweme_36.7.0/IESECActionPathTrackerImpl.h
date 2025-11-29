@class NSString, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, HTSKVStore;

@interface IESECActionPathTrackerImpl : NSObject <IESECActionPathTracker> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _trackerPluginLock;
    NSMutableDictionary *_trackerPlugins;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwLock;
    NSObject<OS_dispatch_queue> *_rwQueue;
    NSMutableDictionary *_pathMap;
    long long _packedLimit;
    NSMutableArray *_packedPathIDs;
    long long _packedPathIDsOnceFlag;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    id<HTSKVStore> _kvStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)trackEvent:(id)a0 params:(id)a1;
- (id)getPluginWithClass:(id)a0;
- (id)init_private;
- (BOOL)trackerSwitch;
- (void)actionPathStart:(id)a0;
- (void)dispatchNode:(id)a0 pathID:(id)a1;
- (void)actionPathEnd:(id)a0;
- (void)dispatchNode:(id)a0;
- (BOOL)sampleConfig;
- (void)createNewActionPath:(id)a0 pageName:(id)a1;
- (void).cxx_destruct;
- (void)record:(id)a0;
- (void)dealloc;
- (void)registerPlugin:(Class)a0;

@end
