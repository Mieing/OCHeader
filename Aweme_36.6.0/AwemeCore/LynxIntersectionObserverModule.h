@class NSString, NSDictionary, LynxContext;

@interface LynxIntersectionObserverModule : NSObject <LynxContextModule> {
    LynxContext *context_;
}

@property (class, readonly, copy, nonatomic) NSString *name;
@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;
@property (class, readonly, copy, nonatomic) NSDictionary *attributeLookup;

@property (retain, nonatomic) id extraData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithLynxContext:(id)a0;
- (void)runOnUIThreadSafely:(id /* block */)a0;
- (void)createIntersectionObserver:(long long)a0 inComponent:(id)a1 withOptions:(id)a2;
- (void)relativeTo:(long long)a0 selector:(id)a1 margins:(id)a2;
- (void)relativeToViewport:(long long)a0 margins:(id)a1;
- (void)relativeToScreen:(long long)a0 margins:(id)a1;
- (void)observe:(long long)a0 selector:(id)a1 withCallbackId:(long long)a2;
- (void).cxx_destruct;
- (void)disconnect:(long long)a0;

@end
