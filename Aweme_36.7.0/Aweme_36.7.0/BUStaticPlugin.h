@class NSMutableDictionary;

@interface BUStaticPlugin : NSObject

@property (retain, nonatomic) NSMutableDictionary *nativeInvocations;

- (BOOL)callHandlerWithCommand:(id)a0 engine:(id)a1 completion:(id /* block */)a2;
- (void)registerHandlerBlock:(id /* block */)a0 forMethodName:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
