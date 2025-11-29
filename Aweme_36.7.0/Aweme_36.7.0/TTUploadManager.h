@class NSMutableDictionary, NSFileManager, NSString, NSLock;

@interface TTUploadManager : NSObject

@property (retain) NSMutableDictionary *uploadTaskDic;
@property (retain) NSLock *uploadTaskDicLock;
@property (retain) NSFileManager *fileManager;
@property BOOL isAppBackground;
@property (copy) NSString *tempDirPath;
@property (copy) id /* block */ onCompletionHandler;

+ (id)shareInstance;

- (void)applicationEnterBackground;
- (unsigned long long)getDownloadingTaskDicCount;
- (void)startUploadWithParams:(id)a0 progress:(id /* block */)a1 result:(id /* block */)a2;
- (void)cancelUploadWithKey:(id)a0 block:(id /* block */)a1;
- (void)queryUploadTaskWithKey:(id)a0 progressBlock:(id /* block */)a1 status:(long long)a2;
- (id)findUploadTaskInDicLock:(id)a0;
- (void)asyncStatusReport:(long long)a0 param:(id)a1 resultBlock:(id /* block */)a2;
- (BOOL)addUploadTaskToDicLock:(id)a0;
- (BOOL)deleteUploadTaskInDicLock:(id)a0;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (id)init;
- (void)dealloc;

@end
