@class NSString, NSObject;

@interface __RxKVOObserver : NSObject

@property (readonly, weak, nonatomic) NSObject *observer;
@property (readonly, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) unsigned long long observingOptions;
@property (readonly, nonatomic) void *context;
@property (readonly, copy, nonatomic) id /* block */ handler;

- (id)initWithObserver:(id)a0 keyPath:(id)a1 observingOptions:(unsigned long long)a2 context:(void *)a3 handler:(id /* block */)a4;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;

@end
