@class NSString, PIABiMapTable;

@interface PuzzlePIAPlugin : NSObject <PuzzleKitViewLifeCycleProtocol>

@property (retain, nonatomic) PIABiMapTable *pluginMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)loadSwizzled;
+ (id)sharedPIAPlugin;

- (void)kitView:(id)a0 willCreatedWithContext:(id)a1;
- (void)kitView:(id)a0 didCreatedWithContext:(id)a1;
- (void)kitView:(id)a0 willStartLoadWithRequest:(id)a1;
- (void)kitViewDidStartLoading:(id)a0;
- (void)kitView:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)kitView:(id)a0 viewDidLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)kitViewWillDealloc:(id)a0;
- (BOOL)usePIA:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
