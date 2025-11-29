@class NSString, MJShootComposingViewModel;

@interface MJShootEffectMaterialViewModel : NSObject <MJMaterialLoadingStatusViewModel>

@property (weak, nonatomic) MJShootComposingViewModel *shootComposingVM;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)downloadStatus;
- (void)mj_loadMaterialWithID:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (float)mj_loadingProgressWithID:(id)a0;
- (unsigned long long)mj_loadingStatusWithID:(id)a0;
- (void)resetMaterialsLoadingStatus;
- (void)loadingStatusForID:(id)a0 threadSafetyHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
