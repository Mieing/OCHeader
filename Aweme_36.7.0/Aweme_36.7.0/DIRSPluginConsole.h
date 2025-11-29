@class NSString, DIRSContext;

@interface DIRSPluginConsole : DIRSBasicModule <IRISModule, IRISLogger>

@property BOOL isEnabled;
@property long long state;
@property (readonly) DIRSContext *context;
@property (copy, nonatomic) NSString *category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleId;
+ (BOOL)isPlugin;
+ (id)moduleVersion;

- (void)addLog:(id)a0;
- (void)_print:(id)a0;
- (id)executionQueue;
- (void)commonInit;

@end
