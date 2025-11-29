@interface KindaVoidCallbackObject : MMVoidCallback

@property (copy, nonatomic) id /* block */ handler;

+ (id)create:(id /* block */)a0;

- (void)call;
- (void).cxx_destruct;

@end
