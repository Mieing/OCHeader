@class NSString, NSArray, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface AMapLogUploader : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *uploadDispatchQueue;
@property (retain, nonatomic) NSUserDefaults *userDefult;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *queueSemaphore;
@property (copy, nonatomic) NSString *synchronizeToken;
@property (readonly, getter=isUpLoading) BOOL upLoading;
@property (readonly, nonatomic) NSArray *waitingUploadDirectorys;

+ (id)logStringWithDictionary:(id)a0 encrypted:(BOOL)a1;
+ (id)shareInstance;

- (void)_updateWaitingUploadDirs;
- (void)uploadComponentName:(id)a0 levelStr:(id)a1 hotFile:(id)a2 complete:(id /* block */)a3;
- (void)setUpLoading:(BOOL)a0;
- (BOOL)_currentUploadSizeExcessMaxOneDay:(id)a0;
- (unsigned long long)_getSingleUploadSizeWithLevelStr:(id)a0 componentName:(id)a1;
- (void)_updateTotalUploadSizeOneDay:(unsigned long long)a0;
- (void)_uploadLogArray:(id)a0 componentName:(id)a1 complete:(id /* block */)a2;
- (void)uploadComponentName:(id)a0 levelStr:(id)a1 complete:(id /* block */)a2;
- (void)_getUploadLogSize:(unsigned long long)a0 levelStr:(id)a1 completeBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (id)_initSingleton;

@end
