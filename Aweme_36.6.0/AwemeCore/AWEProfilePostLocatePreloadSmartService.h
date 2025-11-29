@class NSCache, NSString;

@interface AWEProfilePostLocatePreloadSmartService : AWEBaseSmartServiceImpl <AWEProfilePostLocatePreloadSmartService>

@property (retain, nonatomic) NSCache *truthResultCache;
@property (nonatomic) BOOL hasPrepared;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)abTestConfig;

- (void)onServiceInit;
- (void)onWillRunCompletion:(BOOL *)a0 input:(id)a1 output:(id)a2;
- (BOOL)injectTruthForData:(id)a0 withInput:(id)a1 ext:(id)a2;
- (void)collectionTruthParams:(id)a0 params:(id)a1;
- (BOOL)hasPackagePrepared;
- (void).cxx_destruct;
- (id)init;
- (void)prepare;

@end
