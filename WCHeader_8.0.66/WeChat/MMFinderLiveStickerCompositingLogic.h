@class MMFinderLiveTask, MMFinderLiveTaskId, OrderedDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface MMFinderLiveStickerCompositingLogic : NSObject

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (nonatomic) unsigned long long maxStickerCount;
@property (retain, nonatomic) OrderedDictionary *compositingStickerDict;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *stickerDictLock;
@property (readonly, nonatomic) MMFinderLiveTask *liveTask;

+ (id)createStickerCompositingLogic:(unsigned long long)a0 taskId:(id)a1;
+ (id)createStickerCompositingLogic:(unsigned long long)a0 maxStickerCount:(unsigned long long)a1 taskId:(id)a2;
+ (id)createStickerTransmitCompositingLogicWithTaskId:(id)a0;
+ (id)createStickerTransmitCompositingLogicWithMaxStickerCount:(unsigned long long)a0 taskId:(id)a1;

- (id)initWithMaxCount:(unsigned long long)a0 taskId:(id)a1;
- (void)initDefaultData;
- (unsigned long long)addStickerItem:(id)a0;
- (unsigned long long)insertStickerItemToBack:(id)a0;
- (unsigned long long)removeStickerItem:(id)a0;
- (unsigned long long)removeStickerItemWithId:(id)a0;
- (id)getCompositingStickerList;
- (void).cxx_destruct;

@end
