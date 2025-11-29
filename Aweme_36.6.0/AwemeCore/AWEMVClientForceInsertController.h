@class NSArray, NSMutableDictionary, NSString;

@interface AWEMVClientForceInsertController : AWEDCFeedBaseController <AWEMVClientForceInsertControllerProtocol>

@property (retain, nonatomic) NSArray *strategyList;
@property (retain, nonatomic) NSMutableDictionary *insertIndexCache;
@property (retain, nonatomic) NSMutableDictionary *fallbackInsertIndexCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareBeforeHandleClientForceInsert:(id)a0;
- (id)collectInsertItemsWithContext:(id)a0;
- (void)handleConflictWithInsertItems:(id)a0 context:(id)a1;
- (id)handleInsertItems:(id)a0 context:(id)a1;
- (void)prepareAfterHandleClientForceInsert;
- (unsigned long long)calculateInsertIndex:(id)a0 withContext:(id)a1;
- (unsigned long long)handleFallbackStrategy:(id)a0 withContext:(id)a1;
- (void)saveInsertItem:(id)a0 to:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)isExclusiveWithInsertMethod:(unsigned long long)a0;
- (id)handleClientForceInsert:(id)a0;
- (void).cxx_destruct;
- (void)containerViewDidLoad;

@end
