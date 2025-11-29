@class NSString, NSDictionary, LynxContext;

@interface PTYLynxBridgeModule : NSObject <LynxContextModule> {
    LynxContext *_context;
}

@property (class, readonly, copy, nonatomic) NSString *name;
@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;
@property (class, readonly, copy, nonatomic) NSDictionary *attributeLookup;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)isValidArray:(id)a0;
+ (id)isValidDict:(id)a0;
+ (void)setup:(id)a0;

- (void)registerMessageHandler:(id)a0 callback:(id /* block */)a1;
- (void)removeMessageHandler:(id)a0;
- (void)registerAppLogRunEventCallback:(id)a0 callback:(id /* block */)a1;
- (void)removeAppLogRunEventCallback:(id)a0;
- (id)initWithLynxContext:(id)a0;
- (void)runTask:(id)a0 withParams:(id)a1 async:(BOOL)a2 entrance:(id)a3 pendingTimeout:(double)a4 callback:(id /* block */)a5;
- (void)registerMessageHandler2:(id)a0;
- (void)registerAppLogRunEventCallback2:(id)a0;
- (BOOL)setValueForKey:(id)a0 key:(id)a1 value:(id)a2 useInMemory:(BOOL)a3;
- (id)getValueForKey:(id)a0 key:(id)a1 useInMemory:(BOOL)a2;
- (BOOL)contain:(id)a0 key:(id)a1 useInMemory:(BOOL)a2;
- (BOOL)removeKeys:(id)a0 keys:(id)a1 useInMemory:(BOOL)a2;
- (id)getValueForKeys:(id)a0 keys:(id)a1 useInMemory:(BOOL)a2;
- (id)getKVData:(id)a0 useInMemory:(BOOL)a1;
- (BOOL)setKVData:(id)a0 data:(id)a1 useInMemory:(BOOL)a2;
- (id)sendMessageEventNameWithBusiness:(id)a0;
- (id)applogEventNameWithBusiness:(id)a0;
- (id)getKVStore:(id)a0 useInMemory:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)isReady;

@end
