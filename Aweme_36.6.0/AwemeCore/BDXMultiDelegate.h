@class Protocol, NSDictionary, NSHashTable;
@protocol BDXMutiInvacationDelegate;

@interface BDXMultiDelegate : NSProxy

@property (retain, nonatomic) NSHashTable *table;
@property (retain, nonatomic) Protocol *protocol;
@property (retain, nonatomic) NSDictionary *signatureMap;
@property (weak, nonatomic) id<BDXMutiInvacationDelegate> invokeDelegate;
@property (weak, nonatomic) id returnValueTarget;

+ (id)cachedSignatureMap:(id)a0;
+ (id)signatureMap:(id)a0;

- (id)allDelegates;
- (id)protocolCast;
- (id)duplicateInvocationWithoutRetain:(id)a0;
- (void)invoke:(id)a0 target:(id)a1;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (id)initWithProtocol:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;
- (void)doesNotRecognizeSelector:(SEL)a0;

@end
