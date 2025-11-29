@class AMapCacheFileManager, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface AMapAnalyticsManager : NSObject {
    NSObject<OS_dispatch_queue> *_logDispatchQueue;
    NSObject<OS_dispatch_queue> *_uploadDispatchQueue;
    NSMutableDictionary *_componentMapping;
    NSMutableDictionary *_regularExpressionMapping;
    NSMutableDictionary *_logServerStateException;
    NSMutableDictionary *_logServerStateCommon;
    AMapCacheFileManager *_fileManager;
    NSObject<OS_dispatch_group> *_group;
}

@property (getter=isUpLoading) BOOL upLoading;
@property (retain, nonatomic) NSMutableDictionary *cacheDataPool;
@property long long currentCacheSize;
@property (nonatomic, getter=isLogEnabled) BOOL logEnabled;

+ (id)errorWithURLError:(id)a0;
+ (id)sharedInstance;

- (id)waitingUploadDirectorys;
- (void)logEvent:(id)a0 params:(id)a1 component:(id)a2;
- (void)appWillTerminte;
- (void)syncWritToFileFromMemory;
- (void)writToFileFromMemory;
- (void)writToFileFromMemoryDataFileName:(id)a0;
- (void)registerProductCrashInfoFilterWithComponent:(id)a0 forKey:(id)a1;
- (void)requestManifestWithComponent:(id)a0;
- (void)clearLogsWithType:(long long)a0 subDirectoryName:(id)a1 complete:(id /* block */)a2;
- (id)nameWithLogType:(long long)a0;
- (void)logEvent:(id)a0 params:(id)a1 component:(id)a2 customFileName:(id)a3;
- (BOOL)isLogServerEnableWithComponent:(id)a0 type:(long long)a1;
- (void)logError:(id)a0 errorInfo:(id)a1 component:(id)a2;
- (id)uploadDataWithType:(long long)a0 logArray:(id)a1;
- (BOOL)isUploadSucceededWithResponseData:(id)a0;
- (void)clearFileOrDirectoryWithPath:(id)a0 complete:(id /* block */)a1;
- (void)logsWithType:(long long)a0 subDirectoryName:(id)a1 completionHandler:(id /* block */)a2;
- (void)uploadLogWithType:(long long)a0 subDirectoryName:(id)a1 complete:(id /* block */)a2;
- (void)saveLogServerStateWithResponseData:(id)a0 component:(id)a1;
- (void)logCrash:(id)a0 crashInfo:(id)a1 component:(id)a2;
- (BOOL)canAppendLogDataWithLength:(unsigned long long)a0 queueLength:(unsigned long long)a1;
- (void)registerProductWithComponent:(id)a0;
- (void)registerProductWithComponentWithoutManifestRequest:(id)a0;
- (void)clearLogWithType:(long long)a0 complete:(id /* block */)a1;
- (void)clearLogsWithType:(long long)a0 component:(id)a1 complete:(id /* block */)a2;
- (void)clearAllLogsComplete:(id /* block */)a0;
- (void)removeLogWithType:(long long)a0 component:(id)a1 fileName:(id)a2 complete:(id /* block */)a3;
- (id)getCacheItemDataWithLogType:(long long)a0 component:(id)a1 fileName:(id)a2;
- (unsigned long long)getCacheItemCountWithLogType:(long long)a0 component:(id)a1;
- (void)logURLError:(id)a0 forURL:(id)a1 component:(id)a2;
- (void)logRESTError:(id)a0 forURL:(id)a1 component:(id)a2;
- (void)uploadLogWithType:(long long)a0;
- (void)uploadLogWithType:(long long)a0 component:(id)a1 complete:(id /* block */)a2;
- (void)reportCrash:(id)a0 withName:(id)a1 withComponent:(id)a2;
- (void)saveExceptionStateWithFlag:(BOOL)a0 component:(id)a1;
- (void)saveEventStateWithFlag:(BOOL)a0 component:(id)a1;
- (id)crashComponentWithCrashInfo:(id)a0;
- (void)logsWithType:(long long)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)appDidEnterBackground;

@end
