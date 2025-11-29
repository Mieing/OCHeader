@class NSLock, NSMapTable;

@interface BDASDKMediator : NSObject

@property (copy, nonatomic) id /* block */ configBlock;
@property (retain, nonatomic) NSMapTable *map;
@property (retain, nonatomic) NSLock *operationLock;

+ (id)implementer:(id)a0;
+ (BOOL)registerProtocol:(id)a0 implementer:(id)a1;
+ (void)registerConfiguration:(id /* block */)a0;
+ (BOOL)registerProtocol:(id)a0 implBlock:(id /* block */)a1;
+ (void)unregisterProtocol:(id)a0;
+ (id)allProtocols;
+ (id)configuration;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
