@class NSLock, NSMapTable;

@interface TTVideoEngineActionManager : NSObject

@property (retain, nonatomic) NSMapTable *objRegisterDic;
@property (retain, nonatomic) NSMapTable *classRegisterDic;
@property (retain, nonatomic) NSMapTable *multObjRegisterDic;
@property (retain, nonatomic) NSLock *multiDicLock;

+ (id)shareInstance;

- (void)registerActionObj:(id)a0 forProtocol:(id)a1;
- (void)registerActionObj:(id)a0 forEngine:(id)a1 forProtocol:(id)a2;
- (void)registerActionClass:(Class)a0 forProtocol:(id)a1;
- (id)actionObjWithProtocal:(id)a0;
- (id)actionObjWithProtocal:(id)a0 engine:(id)a1;
- (Class)actionClassWithProtocal:(id)a0;
- (void)removeActionClass:(Class)a0 forProtocol:(id)a1;
- (void)removeActionObj:(id)a0 forProtocol:(id)a1;
- (void)removeActionForengine:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
