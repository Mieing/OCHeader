@interface ACCMiddlemanProxy : NSProxy

@property (weak, nonatomic) id originalDelegate;
@property (weak, nonatomic) id middlemanDelegate;

- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)debugDescription;
- (BOOL)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;

@end
