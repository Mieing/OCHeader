@class BDXThreadSafeArray, NSString, BDXThreadSafeDictionary, BDWKPrecreator;

@interface BDXWebProvider : NSObject <BDWKPrecreatorLifeCycle>

@property (retain, nonatomic) BDXThreadSafeDictionary *precreatorDic;
@property (retain, nonatomic) BDWKPrecreator *precreator;
@property (nonatomic) int maxNumberOfWarmupWebView;
@property (retain, nonatomic) BDXThreadSafeArray *warmupList;
@property (nonatomic) long long maxNumberOfInstances;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preCreateExecture;
+ (id)sharedInstance;

- (id)fetchWebPreWarmupViewWithIsFromPreheat:(BOOL *)a0 isfromCache:(BOOL *)a1;
- (BOOL)needRemoveInstance;
- (void)clearWebViewWhenWebTerminate:(id)a0 webView:(id)a1;
- (id)fetchWebViewWithIsFromCache:(BOOL *)a0 params:(id)a1;
- (id)fetchWebViewWithIsFromCache:(BOOL *)a0;
- (void)initPrecreate;
- (id)createCreatorWithtype:(long long)a0;
- (id)createWebViewWithConfiguration:(id)a0;
- (void)tiggerWarmup;
- (void).cxx_destruct;
- (id)init;

@end
