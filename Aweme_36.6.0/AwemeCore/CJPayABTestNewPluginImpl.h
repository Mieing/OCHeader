@class NSString, NSMutableDictionary;

@interface CJPayABTestNewPluginImpl : NSObject <CJPayABTestNewPlugin>

@property (retain, nonatomic) NSMutableDictionary *experimentsDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerPlugin;
+ (id)defaultService;

- (id)getABTestValWithKey:(id)a0 exposure:(BOOL)a1;
- (void)registerABTestWithKey:(id)a0 defaultValue:(id)a1;
- (void)registerABTestWithKey:(id)a0 defaultValue:(id)a1 isSticky:(BOOL)a2;
- (id)abTestValToString:(id)a0;
- (void).cxx_destruct;

@end
