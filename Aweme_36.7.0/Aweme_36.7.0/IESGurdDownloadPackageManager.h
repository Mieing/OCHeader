@class NSMutableDictionary, IESGurdBaseDownloadOperation, IESGurdDownloadOperationsQueue, NSObject;
@protocol OS_dispatch_queue;

@interface IESGurdDownloadPackageManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *downloadSerialQueue;
@property (retain, nonatomic) IESGurdDownloadOperationsQueue *downloadOperationsQueue;
@property (retain, nonatomic) NSMutableDictionary *downloadResultsDictionary;
@property (retain, nonatomic) IESGurdBaseDownloadOperation *downloadingOperation;

+ (void)downloadResourcesWithModels:(id)a0 callback:(id /* block */)a1;
+ (void)updateResourcesWithModels:(id)a0 callback:(id /* block */)a1;
+ (void)fallbackToFull:(id)a0 completion:(id /* block */)a1;
+ (void)downloadResourceWithModel:(id)a0 completion:(id /* block */)a1;
+ (void)downloadResourcesWithModels:(id)a0;
+ (id)sharedManager;

- (void)cancelDownloadWithAccessKey:(id)a0 channel:(id)a1;
- (int)getTaskRemain;
- (void)downloadPackageWithConfig:(id)a0 resultBlock:(id /* block */)a1;
- (void)enqueueDownloadPatchPackageOperationWithConfig:(id)a0 completion:(id /* block */)a1;
- (void)enqueueDownloadFullPackageOperationWithConfig:(id)a0 completion:(id /* block */)a1;
- (BOOL)isInDownloadOperationQueue:(id)a0 channel:(id)a1;
- (void)downloadIfNeededDispatch;
- (void).cxx_destruct;
- (void)downloadIfNeeded;

@end
