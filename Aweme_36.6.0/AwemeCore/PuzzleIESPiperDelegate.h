@class NSString, PuzzleIESPiperDelegateMethodFactory;
@protocol IESHYHybridViewProtocol;

@interface PuzzleIESPiperDelegate : NSProxy <IESBridgeEngineDelegate>

@property (weak, nonatomic) id<IESHYHybridViewProtocol> hybridView;
@property (copy, nonatomic) id /* block */ willRegisterBlock;
@property (retain, nonatomic) PuzzleIESPiperDelegateMethodFactory *methodFactory;
@property (readonly, weak, nonatomic) id target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)weakProxyWithTarget:(id)a0 hybridView:(id)a1;

- (BOOL)bridgeEngine:(id)a0 skipMatchBridgeWithMessage:(id)a1;
- (id)initWithTarget:(id)a0 hybridView:(id)a1;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;

@end
