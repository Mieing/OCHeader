@class NSString, NSMutableArray;

@interface WCMomentsAssetCompositePool : NSObject <WCSightVideoCompositeTaskDelegate>

@property (nonatomic) unsigned long long entrance;
@property (retain, nonatomic) NSMutableArray *srcAssetList;
@property (retain, nonatomic) NSMutableArray *completedAssetList;
@property (copy, nonatomic) id /* block */ resultBlock;
@property (copy, nonatomic) id /* block */ sightDraftTaskResultBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_getUserWCRootDir;
+ (id)_getUserWCExportCacheDir;

- (id)initWithEntrance:(unsigned long long)a0;
- (void)dealloc;
- (void)addSrcAssetList:(id)a0;
- (void)startWithResultBlock:(id /* block */)a0;
- (void)_startNextCompositeTask;
- (void)_onTaskFinishedWithAssetInfo:(id)a0 isComplete:(BOOL)a1;
- (void)_onTaskFailedWithAssetInfo:(id)a0 error:(id)a1;
- (void)_startCompositionWithAssetInfo:(id)a0 editAttr:(id)a1;
- (id)_copyOutputVideoToTempDirFromPath:(id)a0 withAssetInfo:(id)a1;
- (void)startSightDraftTask:(id)a0 withResultBlock:(id /* block */)a1;
- (void)sightVideoCompositeTask:(id)a0 didFinish:(BOOL)a1 withSightDraft:(id)a2;
- (void).cxx_destruct;

@end
