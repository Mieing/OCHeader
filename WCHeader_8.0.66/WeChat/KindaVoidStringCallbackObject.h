@interface KindaVoidStringCallbackObject : MMVoidStringCallback

@property (copy, nonatomic) id /* block */ handler;

+ (id)create:(id /* block */)a0;

- (void)call:(id)a0;
- (void).cxx_destruct;

@end
