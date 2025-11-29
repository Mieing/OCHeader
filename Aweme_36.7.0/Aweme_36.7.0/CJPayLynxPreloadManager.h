@class NSString, NSMutableDictionary;

@interface CJPayLynxPreloadManager : NSObject <CJPayLynxPerloadModule>

@property (retain, nonatomic) NSMutableDictionary *preloadResultMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentManager;
+ (void)registerComponents;

- (void)i_preloadYueFuTemplate;
- (BOOL)checkPreloaded:(id)a0;
- (void)preLoadTemplate:(id)a0;
- (void)p_updatePreloadResult:(id)a0 isSuccess:(BOOL)a1;
- (void).cxx_destruct;

@end
