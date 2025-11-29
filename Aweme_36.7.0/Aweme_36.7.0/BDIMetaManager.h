@class NSObject, NSMutableDictionary, NSNumber, NSLock;
@protocol OS_dispatch_queue;

@interface BDIMetaManager : NSObject

@property (retain, nonatomic) NSNumber *predefine_ab_open;
@property (retain, nonatomic) NSMutableDictionary *bidModels;
@property (retain, nonatomic) NSMutableDictionary *cacheJSFilePath;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (void)predefine:(id)a0 bid:(id)a1;
- (id)getPredefineJsFiles:(id)a0 bid:(id)a1;
- (void)readMetaFile:(BOOL)a0 bid:(id)a1;
- (void)sdkSessionLaunch;
- (void)setupABOpen;
- (BOOL)shouldUsePredefine;
- (id)tryGetModelFromBid:(id)a0;
- (BOOL)useBuiltin:(id)a0;
- (void)initInnerAsset;
- (void)initGeckoAsset;
- (void)_predefineMeta:(id)a0 bid:(id)a1;
- (BOOL)shouldBanBuiltin;
- (id)getMatchRules:(id)a0 withKey:(id)a1;
- (id)_getPredefineJSFiles:(id)a0 matchRules:(id)a1 isBuiltin:(BOOL)a2 bid:(id)a3;
- (BOOL)shouldUseAsync;
- (BOOL)validate:(id)a0 model:(id)a1;
- (void)loadJSPath:(id)a0 sync:(BOOL)a1 builtin:(BOOL)a2 bid:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (id)init;
- (id)fromString:(long long)a0;

@end
