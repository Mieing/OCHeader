@class AWECFExtricable, NSArray, NSString, NSBundle, NSError, AWECFDormant;

@interface BDBDModule : NSObject

@property (retain, nonatomic) NSError *loadError;
@property (nonatomic, getter=isLoaded) BOOL loaded;
@property (nonatomic, getter=isRemoved) BOOL removed;
@property (retain, nonatomic) NSArray *files;
@property (copy, nonatomic) NSString *bundlePath;
@property (retain, nonatomic) NSBundle *bundle;
@property (nonatomic, getter=isMarkAsEncrypted) BOOL markAsEncrypted;
@property (retain, nonatomic) AWECFDormant *config;
@property (retain, nonatomic) AWECFExtricable *moduleModel;
@property (readonly, copy, nonatomic) NSString *name;

+ (id)moduleWithFiles:(id)a0;
+ (id)moduleWithBundle:(id)a0;

- (void)initModuleModel;
- (id)initWithFiles:(id)a0 bd_allowedChildViewControllersForUnwindingFromSource:(BOOL)a1;
- (id)initWithBundle:(id)a0 bd_allowedChildViewControllersForUnwindingFromSource:(BOOL)a1;
- (void)initConfigWithFiles:(id)a0;
- (BOOL)loadAndReturnError:(id *)a0 skipsFileNameValidation:(BOOL)a1;
- (id)toPropertyListDictionary;
- (id)toReportDicitonary;
- (id)toLogDicitonary;
- (id)bd_childViewControllerContainingSegueSource:(id)a0 error:(id *)a1;
- (void)bd_prepareForSegue;
- (id)bd_ttcanPerformUnwindSegueAction;
- (void)unload;
- (BOOL)load;
- (void).cxx_destruct;
- (void)remove;
- (id)init;
- (id)initWithPropertyDictionary:(id)a0;
- (BOOL)loadAndReturnError:(id *)a0;

@end
