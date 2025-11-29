@class NSPointerArray;

@interface IESLiveInteractComponentMultiCaster : NSObject

@property (retain, nonatomic) NSPointerArray *delegates;

- (void)fallbackUnrecognizedSelector:(SEL)a0;
- (id)initWithComponents:(id)a0 retain:(BOOL)a1;
- (void)unmountComponents:(id)a0;
- (void)mountComponents:(id)a0;
- (void)p_removeDelegates:(void *)a0;
- (id)signatureForSelector:(SEL)a0;
- (void)forwardInvocationWithLevelControl:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)allObjects;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)addComponents:(id)a0;
- (id)debugDescription;
- (void)forwardInvocation:(id)a0;

@end
