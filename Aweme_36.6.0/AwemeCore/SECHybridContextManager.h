@class NSMutableDictionary;

@interface SECHybridContextManager : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _pageContextLock;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _piperContextLock;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _groupMapLock;
}

@property (retain, nonatomic) NSMutableDictionary *pageContextMap;
@property (retain, nonatomic) NSMutableDictionary *piperContextMap;
@property (retain, nonatomic) NSMutableDictionary *page2PipersMap;
@property (retain, nonatomic) NSMutableDictionary *groupMap;
@property (nonatomic) BOOL optimizePage2PipersMap;

+ (id)sharedManager;

- (id)allPiperContxt;
- (id)pageContextForSession:(id)a0;
- (void)setPageContext:(id)a0 forSession:(id)a1;
- (void)removePageContextForSession:(id)a0;
- (void)removeAllPipersForPage:(id)a0;
- (void)setPiperContext:(id)a0 forSession:(id)a1;
- (void)removePiperContextForSession:(id)a0;
- (id)piperContextForSession:(id)a0;
- (id)allPipersForPage:(id)a0;
- (void)addPiperContext:(id)a0 group:(id)a1;
- (void)removePiperContextForSession:(id)a0 group:(id)a1;
- (id)contextsForGroup:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
