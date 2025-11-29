@class WCAppContext, NSMutableArray, NSMutableDictionary;

@interface WCModuleCenter : NSObject

@property (readonly, nonatomic) NSMutableArray *moduleClasseList;
@property (readonly, nonatomic) NSMutableDictionary *modulesMap;
@property (readonly, nonatomic) NSMutableArray *moduleList;
@property (retain, nonatomic) WCAppContext *context;

+ (id)center;

- (id)init;
- (void)registerModule:(Class)a0;
- (void)moduleInit;
- (void)p_initModule:(Class)a0;
- (void)registerModuleAndInit:(Class)a0;
- (void)moduleLoadWithCompleteAction:(id /* block */)a0;
- (void)p_loadModule:(Class)a0 withCompleteAction:(id /* block */)a1;
- (id)getModuleForClass:(Class)a0;
- (void).cxx_destruct;

@end
