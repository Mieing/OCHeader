@class NSString, NSSet;

@interface ILATaskConfig : NSObject {
    struct shared_ptr<ILASDK::ScanTaskConfig> { struct ScanTaskConfig *__ptr_; struct __shared_weak_count *__cntrl_; } taskConfigCPP;
}

@property (copy, nonatomic) NSString *taskID;
@property (readonly, nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSSet *modelType;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) BOOL parseAssetLocation;
@property (nonatomic) BOOL strategy;
@property (nonatomic) BOOL saveDB;
@property (nonatomic) BOOL syncAsset;
@property (nonatomic) BOOL skipScanAsset;
@property (nonatomic) long long batchSize;
@property (copy, nonatomic) id /* block */ assetCmp;
@property (copy, nonatomic) id /* block */ extraFrame;
@property (copy, nonatomic) id /* block */ filterBlock;

- (struct shared_ptr<ILASDK::ScanTaskConfig> { struct ScanTaskConfig *x0; struct __shared_weak_count *x1; })scanTaskConfigCPP;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (id)initWithScene:(unsigned long long)a0;
- (void)dealloc;

@end
