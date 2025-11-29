@class NSMutableArray, Protocol;

@interface BDECPigeonMultiDelegate : NSObject

@property (readonly, nonatomic) NSMutableArray *delegates;
@property (readonly, nonatomic) Protocol *delegateProtocol;

- (void)removeAllDelegates;
- (void)compactDelegates;
- (id)findDelegateObjectByDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (id)initWithProtocol:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
