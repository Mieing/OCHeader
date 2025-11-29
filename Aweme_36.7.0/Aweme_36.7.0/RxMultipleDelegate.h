@class NSString, NSMutableArray;

@interface RxMultipleDelegate : NSObject <RTVMultipleDelegateInterface> {
    NSMutableArray *delegateNodes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeAllDelegates;
- (void)removeDelegate:(id)a0 delegateQueue:(id)a1;
- (id)duplicateInvocation:(id)a0;
- (unsigned long long)countForSelector:(SEL)a0;
- (BOOL)hasDelegateThatRespondsToSelector:(SEL)a0;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)dealloc;
- (unsigned long long)count;
- (void)forwardInvocation:(id)a0;
- (void)doesNotRecognizeSelector:(SEL)a0;
- (id)delegateEnumerator;
- (void)doNothing;
- (void)addDelegate:(id)a0 delegateQueue:(id)a1;
- (unsigned long long)countOfClass:(Class)a0;

@end
