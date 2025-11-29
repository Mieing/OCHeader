@class NSObject, NSMutableDictionary, NSArray, NSString, AWECommerceComponentContext, NSMutableArray;
@protocol OS_dispatch_queue, AWECommerceComponentProtocol;

@interface AWECommerceDispatcherManager : NSObject <AWECommerceDispatcherManager>

@property (retain, nonatomic) NSMutableArray<AWECommerceComponentProtocol> *componentInstanceArray;
@property (retain, nonatomic) NSMutableDictionary *cacheDict;
@property (retain, nonatomic) AWECommerceComponentContext *commerceContext;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } rwLock;
@property (retain, nonatomic) NSMutableArray *boundaryEvents;
@property (copy, nonatomic) id /* block */ videoProgressHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *timerCallbackQueue;
@property (retain, nonatomic) NSArray *forbidResetClassArr;
@property (nonatomic) long long videoDuration;
@property (readonly, nonatomic) BOOL forbidReset;
@property (nonatomic) BOOL hasWillDisplay;
@property (nonatomic) BOOL hasPrepareForDisplay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)adDefaultClassDic;

- (id)classNameArray;
- (id)currentAweme;
- (void)triggerComponentActionAfter:(double)a0 block:(id /* block */)a1;
- (void)setupWithCommerceContext:(id)a0;
- (void)updateForbidReset:(BOOL)a0 withObj:(id)a1;
- (id)componentByProtocol:(id)a0;
- (id)componentArray;
- (void)checkBoundaryEvent:(double)a0;
- (void)addKeyHandler;
- (void)updateCommerceVideoDuration;
- (id)componentsByProtocol:(id)a0;
- (id)componentArrayBySelector:(SEL)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addComponent:(id)a0;
- (void)removeComponent:(id)a0;
- (void)forwardInvocation:(id)a0;
- (void)removeAllComponents;
- (id)videoDelegate;

@end
