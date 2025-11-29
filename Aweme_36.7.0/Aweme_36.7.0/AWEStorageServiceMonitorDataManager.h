@class NSObject, NSString, NSMutableDictionary, NSLock, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AWEStorageServiceMonitorDataManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *IOQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *uploadQueue;
@property (retain, nonatomic) NSMutableArray *datas;
@property (retain, nonatomic) NSLock *lock;
@property (copy, nonatomic) NSString *cachePath;
@property (retain, nonatomic) NSMutableDictionary *unfinisheModels;
@property (nonatomic) long long sequence;

- (void)recordData:(id)a0;
- (void)storageModel:(id)a0 withKey:(id)a1;
- (id)findModelWithKey:(id)a0;
- (void)removeModelWithKey:(id)a0;
- (void)checkLocalCacheData;
- (void)checkUpload;
- (void)uploadDatas:(id)a0 withSessionID:(id)a1 sequence:(long long)a2 sessionFinish:(BOOL)a3;
- (void)saveDataToDisk;
- (id)baseDir;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)didEnterBackground:(id)a0;
- (void)willEnterForeground:(id)a0;
- (void)willTerminate:(id)a0;

@end
