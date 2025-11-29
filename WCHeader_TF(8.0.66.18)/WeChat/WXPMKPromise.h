@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface WXPMKPromise : NSObject {
    NSObject<OS_dispatch_queue> *_promiseQueue;
    NSMutableArray *_handlers;
    id _result;
}

+ (id)pause:(double)a0;
+ (id)when:(id)a0;
+ (id)all:(id)a0;
+ (id)hang:(id)a0;
+ (id)until:(id /* block */)a0 catch:(id)a1;
+ (id)join:(id)a0;
+ (id)promiseWithValue:(id)a0;
+ (id)promiseWithResolver:(id /* block */)a0;
+ (id)new:(id /* block */)a0;
+ (id)promiseWithAdapter:(id /* block */)a0;
+ (id)promiseWithIntegerAdapter:(id /* block */)a0;
+ (id)promiseWithBooleanAdapter:(id /* block */)a0;

- (id /* block */)thenUnleashZalgo;
- (id /* block */)pause;
- (id)init;
- (id /* block */)then;
- (id /* block */)thenInBackground;
- (id /* block */)catchOnMain;
- (id /* block */)finally;
- (id)resolved:(id /* block */)a0 pending:(id /* block */)a1;
- (id /* block */)thenOn;
- (id /* block */)catchOn;
- (id /* block */)finallyOn;
- (id)then:(id /* block */)a0 :(id /* block */)a1;
- (BOOL)pending;
- (BOOL)resolved;
- (BOOL)fulfilled;
- (BOOL)rejected;
- (id)value;
- (id)description;
- (void).cxx_destruct;

@end
