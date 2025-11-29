@class NSPointerArray, NSMapTable, NSString;

@interface ACCCreativePathManager : NSObject <ACCCreativePathManagable>

@property (nonatomic) BOOL flag;
@property (retain, nonatomic) NSPointerArray *observers;
@property (retain, nonatomic) NSMapTable *sessionContainersMap;
@property (nonatomic) unsigned long long currentPage;
@property (nonatomic) BOOL didEnterCreativeOnce;
@property (readonly, nonatomic) BOOL onPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)manager;

- (id)sessionContainerWithCreateId:(id)a0;
- (id)sessionContainerWithCreateId:(id)a0 saveHolder:(id)a1;
- (void)setupObserve:(id)a0 page:(unsigned long long)a1;
- (void)checkWindow;
- (id)allSessionContainers;
- (BOOL)hasPage:(unsigned long long)a0;
- (void)setupObserve:(id)a0;
- (void)observerWillAppear:(id)a0;
- (void)observerDidAppear:(id)a0;
- (void)observerWillDisappear:(id)a0;
- (void)observerDidDisappear:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
