@interface CJPayMedicareChannel : CJPayBasicChannel

@property (nonatomic) BOOL wakingApp;

+ (void)registerPlugin;

- (BOOL)canProcessWithURL:(id)a0;
- (void)appDidInForeground;
- (void)payActionWithDataDict:(id)a0 completionBlock:(id /* block */)a1;
- (void)p_monitorErrorWithSchema:(id)a0 reason:(id)a1;
- (BOOL)isInstalled;
- (id)init;
- (void)dealloc;

@end
