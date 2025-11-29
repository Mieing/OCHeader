@class NSMutableDictionary, NSMutableSet;

@interface WCFinderEventDelegate : NSObject {
    struct set<Protocol *, std::less<Protocol *>, std::allocator<Protocol *>> { struct __tree<Protocol *, std::less<Protocol *>, std::allocator<Protocol *>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<Protocol *, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::less<Protocol *>> { unsigned long long __value_; } __pair3_; } __tree_; } protocols;
}

@property (retain, nonatomic) NSMutableSet *whiteList;
@property (retain, nonatomic) NSMutableSet *blackList;
@property (weak, nonatomic) id target;
@property (weak, nonatomic) WCFinderEventDelegate *next;
@property (retain, nonatomic) NSMutableDictionary *signatureMap;
@property (retain, nonatomic) NSMutableSet *alreadyFastForwardSelectors;

+ (id)delegateWithProtocol:(id)a0 handler:(id)a1;
+ (id)globalAlreadyFastForwardSelectors;

- (void)addNextChain:(id)a0;
- (void)post:(id)a0 selector:(SEL)a1 action:(id /* block */)a2;
- (void)handle:(id)a0 name:(id)a1 selector:(SEL)a2 action:(id /* block */)a3;
- (id)cast;
- (id)cast:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (BOOL)delegateHandleForwardInvocation:(id)a0;
- (void)_addForwardMethodForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
