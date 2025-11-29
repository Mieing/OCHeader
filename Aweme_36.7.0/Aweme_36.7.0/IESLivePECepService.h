@class IESLivePECepEngine, NSString, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface IESLivePECepService : NSObject <IESLivePECepNfaDelegate, IESLivePEEventObserver, IESLiveSettingsSubscriber, IESLiveUserActions, IESLivePECepProvider> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _observer_rwlock;
}

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processQueue;
@property (retain, nonatomic) IESLivePECepEngine *cepEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isRunning;

+ (id)sharedInstance;

- (void)userDidLogin:(id)a0;
- (void)userDidLogout;
- (void)userDidUpdate:(id)a0;
- (void)onEvent:(id)a0 params:(id)a1;
- (void)settingUpdateWithKey:(id)a0 value:(id)a1;
- (void)addPatterns:(id)a0 canCover:(BOOL)a1;
- (void)nfa:(id)a0 didMatches:(id)a1;
- (void)reset:(long long)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)init;
- (void)stop;
- (void)start;
- (void)removeObserver:(id)a0;
- (void)dealloc;

@end
