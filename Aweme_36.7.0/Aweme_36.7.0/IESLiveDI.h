@class NSString, NSMapTable, IESAppContext;
@protocol IESLiveDIContext, IESLiveDI, IESLiveDIExteriorDelegate;

@interface IESLiveDI : NSObject <IESLiveDI>

@property (retain, nonatomic) id<IESLiveDIContext> retainedContext;
@property (retain, nonatomic) IESAppContext *realDI;
@property (weak, nonatomic) id<IESLiveDI> parentDI;
@property (retain, nonatomic) NSMapTable *childrenDIMap;
@property (retain, nonatomic) NSMapTable *multicasterMap;
@property (nonatomic) BOOL enable_multicaster_map_lock;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) id<IESLiveDIExteriorDelegate> exteriorDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectWithProtocol:(id)a0 protocolName:(id)a1;
- (BOOL)use:(id)a0 forProtocol:(id)a1 protocolName:(id)a2;
- (id)objectWithProtocol:(id)a0;
- (BOOL)useProvider:(id /* block */)a0 forProtocol:(id)a1 protocolName:(id)a2;
- (BOOL)useClass:(Class)a0 forProtocol:(id)a1 protocolName:(id)a2;
- (BOOL)removeObject:(id)a0 forProtocol:(id)a1 protocolName:(id)a2;
- (id)singletonObjectWithProtocol:(id)a0 protocolName:(id)a1;
- (id)prototypeObjectWithProtocol:(id)a0 protocolName:(id)a1;
- (BOOL)useProvider:(id /* block */)a0 forProtocol:(id)a1;
- (BOOL)useClass:(Class)a0 forProtocol:(id)a1;
- (BOOL)use:(id)a0 forProtocol:(id)a1;
- (BOOL)removeObject:(id)a0 forProtocol:(id)a1;
- (id)singletonObjectWithProtocol:(id)a0;
- (id)prototypeObjectWithProtocol:(id)a0;
- (id)multiUse:(id)a0 forProtocol:(id)a1 protocolName:(id)a2;
- (id)multiUse:(id)a0 forProtocol:(id)a1;
- (id)initWithRealDI:(id)a0;
- (id)cacheObjectWithProtocol:(id)a0;
- (void)ieslive_removeChildDIForContext:(id)a0;
- (id)checkRegistries;
- (BOOL)removeClass:(Class)a0 forProtocol:(id)a1;
- (void)ieslive_setChildDI:(id)a0 forContext:(id)a1;
- (id)ieslive_getChildDIforContext:(id)a0;
- (void)setUp;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
