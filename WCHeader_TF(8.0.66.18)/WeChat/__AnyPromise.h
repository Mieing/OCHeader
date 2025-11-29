@interface __AnyPromise : NSObject {
    void /* unknown type, empty encoding */ box;
    void /* unknown type, empty encoding */ context;
}

@property (nonatomic, readonly) id __value;
@property (nonatomic, readonly) BOOL __pending;

- (id)initWithResolver:(id /* block */)a0;
- (void)sealTimeOutError;
- (void)setExpiredWithTime:(double)a0;
- (id)__thenOn:(id)a0 execute:(id /* block */)a1;
- (id)__catchOn:(id)a0 execute:(id /* block */)a1;
- (id)__ensureOn:(id)a0 execute:(id /* block */)a1;
- (id)__wait;
- (void)__pipe:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;

@end
