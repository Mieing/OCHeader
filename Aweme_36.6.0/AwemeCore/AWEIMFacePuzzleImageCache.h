@class NSObject, NSMutableDictionary, BFTaskCompletionSource, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AWEIMFacePuzzleImageCache : NSObject

@property (retain, nonatomic) BFTaskCompletionSource *loadDataTask;
@property (nonatomic) double upperCapacity;
@property (nonatomic) double currentCapacity;
@property (retain, nonatomic) NSMutableDictionary *pathDict;
@property (retain, nonatomic) NSMutableArray *imageArr;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *setToDiskCacheSerialQueue;
@property (nonatomic) long long totalCount;
@property (nonatomic) long long cacheCount;
@property (nonatomic) BOOL isLocal;
@property (nonatomic) double lastReportTime;
@property (nonatomic) double refreshTime;

+ (id)shareInstance;

- (id)imageWithModel:(id)a0;
- (id)p_imageWithModel:(id)a0;
- (id)imageKey:(id)a0;
- (BOOL)checkCached:(id)a0;
- (void)removeLeastUsed;
- (void)refreshToDisk;
- (void).cxx_destruct;
- (id)loadData;

@end
