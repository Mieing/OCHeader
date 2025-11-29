@class NSArray, AWEIMComponentContext, AWEIMComponentLoader, NSMutableDictionary, NSString;

@interface AWEIMComponentManager : NSObject <AWEIMComponentLoaderDelegate, AWEIMComponentHostVCLifeCycle, AWEIMComponentLifeCycle> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _wrLock;
}

@property (retain, nonatomic) AWEIMComponentLoader *loader;
@property (retain, nonatomic) AWEIMComponentContext *context;
@property (retain, nonatomic) NSArray *components;
@property (retain, nonatomic) NSMutableDictionary *selectorCacheDic;
@property (retain) NSArray *containerComponents;
@property (nonatomic) BOOL hasCalledAfterMakeComponents;
@property (nonatomic) BOOL isRoot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)fixMultiThreadIssue;

- (id)componentArrayBySelector:(SEL)a0;
- (void)initialMakeComponents;
- (void)afterMakeComponents;
- (void)loaderDidCreateLazyComponent:(id)a0;
- (BOOL)removeComponentFromRoot:(id)a0;
- (void)empty;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)dealloc;
- (void)removeComponent:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)initWithDependency:(id)a0;
- (void)resolveComponents;

@end
