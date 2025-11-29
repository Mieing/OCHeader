@interface AWEPayInnerEventPushProxy : NSObject

@property (weak, nonatomic) id proxyTarget;
@property (copy, nonatomic) id /* block */ callback;

+ (id)proxyWithTarget:(id)a0 callback:(id /* block */)a1;

- (void).cxx_destruct;

@end
