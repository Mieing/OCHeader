@class NSMutableArray, NSMutableDictionary, AWEPaySKMVoiceBroadcastCache;

@interface AWEPaySKMVoiceBroadcastCacheManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *hashMap;
@property (retain, nonatomic) AWEPaySKMVoiceBroadcastCache *head;
@property (retain, nonatomic) AWEPaySKMVoiceBroadcastCache *tail;
@property (retain, nonatomic) NSMutableArray *getTaskList;
@property (nonatomic) BOOL initilized;

+ (id)defaultManager;

- (BOOL)checkAndCreateFileDirectoryIfNeed;
- (id)getFilePath:(id)a0;
- (void)bringToFront:(id)a0;
- (void)syncListToDisk;
- (id)creatNode:(id)a0 prev:(id)a1 next:(id)a2;
- (id)getCache:(id)a0;
- (void).cxx_destruct;
- (void)saveCache:(id)a0;
- (void)initData;

@end
