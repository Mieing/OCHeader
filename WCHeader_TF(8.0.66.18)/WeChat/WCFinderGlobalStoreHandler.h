@class MMLiteAppViewController;
@protocol WCFinderGlobalStore;

@interface WCFinderGlobalStoreHandler : LiteAppStore

@property (weak, nonatomic) MMLiteAppViewController *liteAppVC;
@property (retain, nonatomic) id<WCFinderGlobalStore> currentStore;

+ (id)handlerMap;
+ (void)registerHandler:(Class)a0;

- (id)init;
- (BOOL)onDispatch:(id)a0 insId:(unsigned long long)a1 actionName:(id)a2 data:(id)a3 callbackId:(int)a4;
- (id)handleForActionName:(id)a0;
- (void).cxx_destruct;

@end
