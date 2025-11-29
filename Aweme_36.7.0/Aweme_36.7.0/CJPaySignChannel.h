@class NSString;

@interface CJPaySignChannel : CJPayBasicChannel <CJPaySignTbPayModule>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *signAliPayScheme;
@property (copy, nonatomic) id /* block */ signAliPayCompletionBlock;
@property (nonatomic) BOOL wakingApp;

+ (void)registerComponents;
+ (void)registerPlugin;
+ (BOOL)isAvailableUse;
+ (id)sharedInstance;

- (BOOL)canProcessWithURL:(id)a0;
- (BOOL)wakeByUniversalPayDesk:(id)a0 withDelegate:(id)a1;
- (void)appDidInForeground;
- (void)payActionWithDataDict:(id)a0 completionBlock:(id /* block */)a1;
- (void)signActionWithDataDict:(id)a0 completionBlock:(id /* block */)a1;
- (void)i_signActionWithDataDict:(id)a0 completionBlock:(id /* block */)a1;
- (void)handleSignAliPayResponseWith:(id)a0;
- (void)p_signByAliPaySDK:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
