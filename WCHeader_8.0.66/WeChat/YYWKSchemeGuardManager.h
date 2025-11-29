@class NSMapTable, YYWKSchemeGuardModel;

@interface YYWKSchemeGuardManager : NSObject

@property (retain, nonatomic) YYWKSchemeGuardModel *guardModel;
@property (retain, nonatomic) NSMapTable *visibleWebViewStateTable;
@property (nonatomic) BOOL ignoreGuardCheck;

+ (id)sharedInstance;
+ (id)getAvailableCapacityControl;
+ (id)getSharedUrlCache;
+ (id)sharedCustomUrlCache;
+ (double)getValueForKey:(id)a0 defaultValue:(double)a1;

- (id)init;
- (id)guardModelFromKV;
- (id)modelJsonStr;
- (void)clearGuardModel;
- (BOOL)canUseHttpScheme;
- (void)checkLastCrash;
- (void)checkRequest:(id)a0;
- (void)markNonGameHostRequest:(id)a0;
- (void)markEnableCustomSchemeFailed;
- (void)markRegisterSchemeFailed;
- (BOOL)isWebViewGameHost:(id)a0;
- (BOOL)isSchemeWKGameWebView:(id)a0;
- (void)handleWebView:(id)a0 state:(unsigned long long)a1;
- (id)anyVisibleSchemeGameWkWebView;
- (void)syncAndReport;
- (void)report;
- (void)syncToKV;
- (void).cxx_destruct;

@end
