@class NSArray;

@interface RxMultipleDelegateEnumerator : NSObject {
    unsigned long long numNodes;
    unsigned long long currentNodeIndex;
    NSArray *delegateNodes;
}

- (id)initFromDelegateNodes:(id)a0;
- (unsigned long long)countForSelector:(SEL)a0;
- (BOOL)getNextDelegate:(id *)a0 delegateQueue:(id *)a1;
- (BOOL)getNextDelegate:(id *)a0 delegateQueue:(id *)a1 ofClass:(Class)a2;
- (BOOL)getNextDelegate:(id *)a0 delegateQueue:(id *)a1 forSelector:(SEL)a2;
- (void).cxx_destruct;
- (unsigned long long)count;
- (unsigned long long)countOfClass:(Class)a0;

@end
