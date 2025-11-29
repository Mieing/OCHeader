@class NSArray, NSMutableDictionary, NSMutableArray;

@interface AWECFObject : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutableModulesLock;
}

@property (retain, nonatomic) NSMutableDictionary *mutableModulesToRemove;
@property (retain, nonatomic) NSMutableDictionary *mutableModules;
@property (retain, nonatomic) NSMutableArray *failedModules;
@property (retain, nonatomic) NSMutableArray *allLoadedModules;
@property (retain, nonatomic) NSMutableDictionary *mutableModulesDidLoad;
@property (readonly, nonatomic) NSArray *allModulesToRemove;
@property (readonly, nonatomic) NSArray *allModules;

+ (id)allModules;
+ (void)clearAllLocalQuaterback;
+ (BOOL)clearLocalQuaterbackWithModule:(id)a0;
+ (id)alphaMainDirectory;
+ (id)moduleDirectoryWithModuleName:(id)a0;
+ (id)historyRecordsFilePath;
+ (BOOL)saveToFileWithModules:(id)a0;
+ (void)_clearAllLocalQuaterback;
+ (BOOL)appendToFileWithModules:(id)a0;
+ (id)sharedManager;

- (void)bd_viewControllerForUnwindSegueAction:(id)a0;
- (void)bd_viewDidAppear:(id)a0;
- (id)allToReportModules;
- (id)moduleForName:(id)a0;
- (void)bd_viewWillDisappear:(id)a0;
- (void)bd_viewWillLayoutSubviews;
- (id)allToLogModules;
- (void)bd_unwindForSegue:(id)a0;
- (id)didLoadModuleWithName:(id)a0;
- (id)allLoadedQuaterbacks;
- (void)bd_viewDidDisappear:(id)a0;
- (void)lockMutableModules;
- (void)unlockMutableModules;
- (void)bd_viewWillAppear:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
