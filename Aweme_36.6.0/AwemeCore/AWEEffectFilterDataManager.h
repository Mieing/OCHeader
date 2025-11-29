@class NSRecursiveLock, NSMutableDictionary, IESEffectPlatformResponseModel, NSLock, NSDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface AWEEffectFilterDataManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *effectIdAndEffectCache;
@property (retain, nonatomic) NSRecursiveLock *effectIdAndEffectCacheLock;
@property (retain, nonatomic) NSMutableDictionary *effectNameAndEffectCache;
@property (retain, nonatomic) NSRecursiveLock *effectNameAndEffectCacheLock;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *downloadQueue;
@property (retain, nonatomic) NSMutableArray *downloadingEffects;
@property (nonatomic) long long nextDownloadIndex;
@property (nonatomic) BOOL isFetching;
@property (retain, nonatomic) IESEffectPlatformResponseModel *p_effectPlatformModelResponseModel;
@property (retain, nonatomic) NSLock *lock;
@property (nonatomic) BOOL enableEffectPrefetchOptimize;
@property (copy, nonatomic) NSDictionary *trackExtraDic;

+ (id)defaultManager;

- (id)effectWithID:(id)a0;
- (id /* block */)pathConvertBlock;
- (void)updateEffectFilters;
- (void)appendDownloadedEffect:(id)a0;
- (BOOL)effectsPanelCached;
- (long long)downloadStatusOfEffect:(id)a0;
- (void)addEffectToDownloadQueue:(id)a0;
- (void)addEffectToDownloadQueue:(id)a0 preload:(BOOL)a1;
- (id)builtinEffects;
- (id)effectPlatformModel;
- (double)effectDurationForEffect:(id)a0;
- (id)maskColorForEffect:(id)a0;
- (id)effectIdWithType:(unsigned long long)a0;
- (void)addNextEffectToDownloadQueue;
- (void)downloadEffect:(id)a0 isPreload:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (id)effectWithName:(id)a0;
- (id)availableEffects;

@end
