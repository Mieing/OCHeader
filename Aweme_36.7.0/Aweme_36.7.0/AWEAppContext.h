@class NSMapTable;

@interface AWEAppContext : NSObject

@property (class, readonly, nonatomic) AWEAppContext *appContext;

@property (retain, nonatomic) NSMapTable *objectRegistry;
@property (retain, nonatomic) NSMapTable *classRegistry;
@property (retain, nonatomic) NSMapTable *providerRegistry;

- (id)objectForProtocol:(id)a0;
- (BOOL)bindProvider:(id /* block */)a0 forProtocol:(id)a1;
- (BOOL)bindClass:(Class)a0 forProtocol:(id)a1;
- (BOOL)bind:(id)a0 forProtocol:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
