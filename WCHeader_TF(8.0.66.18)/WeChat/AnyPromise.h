@class NSString, __AnyPromise;

@interface AnyPromise : NSObject {
    __AnyPromise *d;
}

@property (readonly, copy, nonatomic) id /* block */ thenAnimation;
@property (nonatomic, readonly) NSString *description;
@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) BOOL pending;
@property (readonly, nonatomic) BOOL fulfilled;
@property (readonly, nonatomic) BOOL rejected;

+ (id)promiseWithAdapterBlock:(id /* block */)a0;
+ (id)promiseWithIntegerAdapterBlock:(id /* block */)a0;
+ (id)promiseWithBooleanAdapterBlock:(id /* block */)a0;
+ (id)promiseWithSmartResolverBlock:(id /* block */)a0;
+ (id)promiseWithSmartResolver:(id /* block */ *)a0;
+ (id)errorPromiseWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2;
+ (id)promiseWithSimpleResolverBlock:(id /* block */)a0;
+ (id)promiseWithBlock:(id /* block */)a0;
+ (id)promiseWithDuration:(double)a0 animate:(id /* block */)a1;
+ (id)promiseWithResolverBlock:(id /* block */)a0;
+ (id)promiseWithValue:(id)a0;

- (id /* block */)setExpiredTime;
- (id /* block */)catchErrorThenSay;
- (id /* block */)showToastForCatchedError;
- (id)initWith__D:(id)a0;
- (id)initWithResolver:(id /* block */ *)a0;
- (void)__pipe:(id /* block */)a0;
- (id)__d;
- (id /* block */)then;
- (id /* block */)thenOn;
- (id /* block */)thenInBackground;
- (id /* block */)catchOn;
- (id /* block */)catchOnMain;
- (id /* block */)catchInBackground;
- (id /* block */)ensure;
- (id /* block */)ensureOn;
- (id)wait;
- (void).cxx_destruct;

@end
