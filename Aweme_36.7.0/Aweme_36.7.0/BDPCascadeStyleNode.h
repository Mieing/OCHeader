@class NSString, BDPWeakProxy, NSMutableArray;

@interface BDPCascadeStyleNode : NSObject {
    BDPWeakProxy *_sharedProxy;
}

@property (retain, nonatomic) NSMutableArray *invocations;
@property (copy, nonatomic) NSString *category;
@property (weak, nonatomic) BDPCascadeStyleNode *parentNode;
@property (retain, nonatomic) Class cls;
@property (retain, nonatomic) NSMutableArray *childNodes;

- (void)applyStyleForObject:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void)addChildNode:(id)a0;
- (void)removeFromParentNode;

@end
