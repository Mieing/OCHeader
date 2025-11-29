@class NSMutableDictionary, RxScheduler, AWEPageContext, NSString;
@protocol RxInjector;

@interface __RTVStateRecorder : NSObject <RTVStateRecorder>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) AWEPageContext *pageContext;
@property (readonly, nonatomic) NSMutableDictionary *tokenToKeyHandler;
@property (readonly, nonatomic) RxScheduler *scheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)addKey:(id)a0 handler:(id /* block */)a1;
- (void)rxAwakeFromPropertyInjection;
- (id)addKey:(id)a0 handler:(id /* block */)a1 scheduler:(id)a2;
- (id)__logTag;
- (id)stateValueForKey:(id)a0;
- (void)removeHandlerWithToken:(id)a0;
- (void)setStateValue:(id)a0 forKey:(id)a1 withReason:(id)a2 andContext:(id)a3;
- (id)stateValueForKey:(id)a0 defaultValue:(id)a1;
- (void).cxx_destruct;

@end
