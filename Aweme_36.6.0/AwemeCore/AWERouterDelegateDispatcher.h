@class NSString, NSHashTable;

@interface AWERouterDelegateDispatcher : NSObject <AWERouterDelegate>

@property (retain, nonatomic) NSHashTable *delegatesHashTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)registerDelegate:(id)a0;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)unregisterDelegate:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
