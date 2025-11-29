@class NSArray, NSMutableArray, NSMutableDictionary;

@interface AFDBaseElementContainer : AFDBaseElement

@property (nonatomic) BOOL isRootContainer;
@property (retain, nonatomic) NSMutableArray *candidateElementArray;
@property (retain, nonatomic) NSArray *currentElementArray;
@property (retain, nonatomic) NSMutableDictionary *cacheDict;

+ (id)rootContainerWithClassName:(id)a0 context:(id)a1 actionHandler:(id)a2;

- (id)getElementArrayByProtocol:(id)a0;
- (void)dispatchHostLifeCycleEvent:(id /* block */)a0 isDispatchToSelf:(BOOL)a1;
- (id)initAsRootContainer;
- (id)initAsRootContainerWithContext:(id)a0 actionHandler:(id)a1;
- (id)getElementWithSerialNumber:(long long)a0;
- (void)updateElementsWithClassNameArray:(id)a0;
- (void)currentElementsDidUpdate;
- (void)rootContainerDidPrepare;
- (id)buildElementsWithClassNameArray:(id)a0;
- (BOOL)needUpdateElements;
- (void)doUpdateElements;
- (id)buildElementWithClassName:(id)a0;
- (void)containerDidInitElement:(id)a0;
- (id)previousShowingElements;
- (id)filteredElementArray:(id /* block */)a0;
- (id)getElementArrayBySelector:(SEL)a0;
- (void).cxx_destruct;

@end
