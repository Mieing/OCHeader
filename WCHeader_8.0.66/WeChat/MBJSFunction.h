@interface MBJSFunction : NSObject

@property (nonatomic) unsigned long long handlerId;
@property (copy, nonatomic) id /* block */ invokeCallback;

- (void)invoke:(id)a0;
- (void)invokeWithDict:(id)a0;
- (void).cxx_destruct;

@end
