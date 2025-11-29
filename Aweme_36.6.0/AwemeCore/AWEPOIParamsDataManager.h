@class AWEPOIRepeatEventRuleModel, NSPointerArray, AWEPOIParamsDataModelManager;

@interface AWEPOIParamsDataManager : NSObject

@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) AWEPOIParamsDataModelManager *mobManager;
@property (retain, nonatomic) AWEPOIParamsDataModelManager *routerManager;
@property (retain, nonatomic) AWEPOIRepeatEventRuleModel *repeatEventRuleModel;
@property (retain, nonatomic) NSPointerArray *observers;
@property (nonatomic) struct __CFRunLoopObserver { } *runLoopObserver;

+ (id)settingsInfo;
+ (id)sharedManager;

- (BOOL)isFileExistAtPath:(id)a0;
- (void)prepareForUpdate;
- (id)localFileDirectory;
- (id)tempDownloadFileDirectory;
- (void)stopRunloopObserver;
- (void)reloadDataModelManager:(long long)a0;
- (unsigned long long)checkStatusAndAddStatusObserverIfNotDone:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)downloadURL;
- (void)startUpdate;
- (id)rootURL;

@end
