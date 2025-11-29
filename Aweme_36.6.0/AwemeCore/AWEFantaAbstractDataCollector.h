@class NSString, NSMutableArray;

@interface AWEFantaAbstractDataCollector : NSObject <FantaDataCollector>

@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSMutableArray *dataListeners;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } rwLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)registerDataListener:(id)a0;
- (void)onDataCollectorInit;
- (void)unRegisterDataListener:(id)a0;
- (void)notifyListenersWithInfo:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)type;
- (void)dealloc;

@end
