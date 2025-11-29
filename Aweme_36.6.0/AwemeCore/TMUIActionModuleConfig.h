@interface TMUIActionModuleConfig : TMModuleConfig

+ (long long)statusForUIAction:(id)a0;
+ (BOOL)enableRemoveUIAction;
+ (BOOL)enableUIActionThreadTransfer;
+ (BOOL)enableGetViewControllerURL;
+ (id)configKey;

- (Class)moduleClass;
- (BOOL)canAsyncInit;
- (id)initWithDictionary:(id)a0;

@end
