@class NSString, NSMutableArray, NSHashTable;

@interface AWEECMallContainerOptManager : NSObject <HTSService, AWEECMallContainerOptSceneProtocol>

@property (retain, nonatomic) NSMutableArray *optSceneArray;
@property (retain, nonatomic) NSHashTable *optSceneTable;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } mutexLock;
@property (copy, nonatomic) NSString *prefetchRequestId;
@property (nonatomic) BOOL enableWeakContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareManager;

- (void)registContainerOptScene:(id)a0;
- (void)launchPrepare;
- (id)tabMallPrefetchId;
- (id)scenesEnumerator;
- (void).cxx_destruct;
- (id)init;
- (void)prepare;

@end
