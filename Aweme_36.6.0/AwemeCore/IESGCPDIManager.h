@class NSPointerArray, NSMapTable, IESGCPDIContainer;
@protocol IESGCPDIContext;

@interface IESGCPDIManager : NSObject

@property (retain, nonatomic) NSMapTable *store;
@property (retain, nonatomic) NSMapTable *contextIDMap;
@property (retain, nonatomic) NSPointerArray *diStack;
@property (retain, nonatomic) IESGCPDIContainer *appDI;
@property (weak, nonatomic) IESGCPDIContainer *roomDI;
@property (readonly, weak, nonatomic) id<IESGCPDIContext> currentDIContext;

+ (id)shareInstance;

- (BOOL)bindObject:(id)a0 forProtocol:(id)a1 withContext:(id)a2;
- (BOOL)multiBindObject:(id)a0 forProtocol:(id)a1 withContext:(id)a2;
- (BOOL)unbindObject:(id)a0 forProtocol:(id)a1 withContext:(id)a2;
- (id)diContainerWithContext:(id)a0;
- (id)registerDIWithContext:(id)a0 parentDI:(id)a1;
- (id)objectForProtocol:(id)a0 withContext:(id)a1 isExplicit:(BOOL)a2;
- (id)diContextWithContextID:(id)a0;
- (void)reportMonitorWithStatus:(long long)a0 extra:(id)a1;
- (id)diContainerWithContextID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
