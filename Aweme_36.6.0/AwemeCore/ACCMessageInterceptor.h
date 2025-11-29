@interface ACCMessageInterceptor : NSObject

@property (weak, nonatomic) id receiver;
@property (weak, nonatomic) id middleMan;
@property (copy, nonatomic) id /* block */ forwardingConfig;

- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)conformsToProtocol:(id)a0;

@end
