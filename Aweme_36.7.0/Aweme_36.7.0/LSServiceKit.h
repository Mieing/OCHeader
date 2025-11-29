@class NSMapTable;

@interface LSServiceKit : NSObject

@property (retain, nonatomic) NSMapTable *clazzs;
@property (retain, nonatomic) NSMapTable *objects;

+ (id)shared;

- (id)objectForProtocol:(id)a0;
- (BOOL)setObject:(id)a0 forProtocol:(id)a1;
- (BOOL)registerClass:(Class)a0 forProtocol:(id)a1;
- (Class)classForProtocol:(id)a0;
- (id)removeObjectForProtocol:(id)a0;
- (id)multiObjectForProtocol:(id)a0;
- (Class)unRegisterClassForProtocol:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
