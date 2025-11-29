@class NSString, NSMutableArray, NSMutableDictionary;

@interface QBWebInspector : NSObject

@property (retain) NSMutableArray *webpages;
@property (retain) NSMutableDictionary *statusInfo;
@property (retain) NSMutableArray *pageIDsForUpload;
@property (retain) NSMutableArray *pageIDsHasUploaded;
@property (retain, nonatomic) NSString *fileName;

+ (id)sharedInstance;
+ (void)initialize;
+ (BOOL)validationCheckForEvent:(id)a0;
+ (id)networkDescriptionWithStatus:(long long)a0;
+ (void)loadStatusAndCheckWebpageVaildation;
+ (void)addWebItemEvent:(id)a0;
+ (BOOL)saveWebpagesToFile;
+ (id)webpageWithURL:(id)a0;
+ (id)webItemWithURL:(id)a0 pageURL:(id)a1;
+ (void)addEvent:(id)a0 forRequest:(id)a1;
+ (void)addStatusWithKey:(id)a0 value:(id)a1 allowDuplicateKey:(BOOL)a2;
+ (BOOL)isWebInspectorURL:(id)a0;
+ (id)businessIDForWebInspectorURL:(id)a0;
+ (void)startSpeedTestWithCompletion:(id /* block */)a0;
+ (id)sortedFilePathsForSubPaths:(id)a0;
+ (id)filePathForWebLogs;
+ (BOOL)saveToFile;
+ (BOOL)uploadWithDetail:(BOOL)a0 triggerURL:(id)a1 completion:(id /* block */)a2;
+ (BOOL)uploadAllLogsWithCompletion:(id /* block */)a0;
+ (BOOL)uploadWithBusinessID:(id)a0 log:(id)a1 completion:(id /* block */)a2;
+ (void)uploadLogWithPaths:(id)a0 completion:(id /* block */)a1;
+ (id)JSONInfoWithDetail:(BOOL)a0 shouldUpload:(BOOL)a1;

- (void).cxx_destruct;

@end
