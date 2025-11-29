@class MMFinderLiveTaskId;

@interface MMLiveGiftResourcesEnsuranceHelper : NSObject

@property (retain, nonatomic) MMFinderLiveTaskId *liveTaskId;
@property (copy, nonatomic) id /* block */ giftFetchingWorkItem;

- (id)initWithLiveTaskId:(id)a0;
- (BOOL)ensureGiftResources:(id)a0 completionBlock:(id /* block */)a1;
- (BOOL)ensureGiftResourcesEx:(id)a0 correlationId:(id)a1 completionBlock:(id /* block */)a2;
- (void)invokeResourceDownloadWorkItems:(id)a0 resourceDescriptors:(id)a1 correlationId:(id)a2 completionBlock:(id /* block */)a3;
- (id)validateAvailabilityOfResources:(id)a0 correlationId:(id)a1;
- (void).cxx_destruct;

@end
