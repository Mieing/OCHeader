@class MMFinderLiveProductShareTask;

@interface EcsProdctShareLogic : NSObject

@property (retain, nonatomic) MMFinderLiveProductShareTask *task;

- (void)shareProductLoadProductWithShareTask:(id)a0 completeBlock:(id /* block */)a1;
- (id)finderDataItemTryCurrentLiveWithAnchor:(id)a0;
- (void)buildProductShareItemWithShareTask:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
