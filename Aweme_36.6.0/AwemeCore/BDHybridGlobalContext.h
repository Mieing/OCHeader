@class NSTimer, NSMutableDictionary;

@interface BDHybridGlobalContext : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _pageSessionLock;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _apiSessionLock;
}

@property (retain, nonatomic) NSMutableDictionary *pageSessionContexts;
@property (retain, nonatomic) NSMutableDictionary *apiSessionContexts;
@property (retain, nonatomic) NSMutableDictionary *pageAPIDicts;
@property (retain, nonatomic) NSTimer *cleaningTimer;

+ (id)sharedContext;

- (id)findPageContextWithSession:(id)a0;
- (void)removePageSession:(id)a0;
- (void)removeAPISession:(id)a0;
- (id)findAPIContextWithSession:(id)a0;
- (id)findFrameworkPageContext:(id)a0 error:(id *)a1;
- (id)findFrameworkAPIContext:(id)a0 error:(id *)a1;
- (void)_addAPIContext:(id)a0;
- (void)_addPageContext:(id)a0;
- (void)_startCleaningTimerIfNeeded;
- (void)_onTimerFired;
- (void)_createErrorWithMsg:(id)a0 error:(id *)a1;
- (id)activeAPIContexts;
- (id)activePageContexts;
- (id)_createErrorWithMsg:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addContext:(id)a0;
- (void)removeContext:(id)a0;

@end
