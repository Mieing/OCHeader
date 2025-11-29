@class NSArray, NSString, NSMutableArray, NSObject;
@protocol ACCSequenceEditServiceProtocol, AWEPublishEditServiceManagerProtocol, OS_dispatch_semaphore, OS_dispatch_queue;

@interface AWEPublishMergeImageHelperImpl : NSObject <ACCPublishMergeImageHelperProtocol>

@property (nonatomic) double scale;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableArray *operations;
@property (retain, nonatomic) NSMutableArray *executeOperations;
@property (retain, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (retain, nonatomic) id<AWEPublishEditServiceManagerProtocol> editServiceManager;
@property (nonatomic) long long maxConcurrentCount;
@property (nonatomic) BOOL background;
@property (nonatomic) long long backgroundWaitOperationCount;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *backgroundWaitSemaphore;
@property (readonly, weak, nonatomic) NSArray *allOperation;
@property (retain, nonatomic) NSArray *disableSequenceEditServiceIndexs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)useSequenceEditService:(id)a0;
- (id)imageWithConfig:(id /* block */)a0 completion:(id /* block */)a1;
- (id)imagesWithConfig:(id /* block */)a0 completion:(id /* block */)a1;
- (void)removeWithOperationIDs:(id)a0;
- (BOOL)enableIsolateEditAndPublishEditorWithPublishModel:(id)a0;
- (void)useEditServiceManager:(id)a0;
- (void)removeReusableEditServicesIfNeeded;
- (void)printOperation:(id)a0 executeInfo:(id)a1;
- (void)lockWithExecuteBlock:(id /* block */)a0;
- (void)handleOperation:(id)a0 editService:(id)a1;
- (void)activeEditServiceWithOperation:(id)a0 completion:(id /* block */)a1;
- (BOOL)canUseSequenceEditServiceWithIndex:(long long)a0 workspace:(id)a1;
- (void)finishedOperation:(id)a0 exportItemModel:(id)a1 mergeImage:(id)a2 editService:(id)a3 error:(id)a4;
- (void)getProcessImageWithOperation:(id)a0 activedEditService:(id)a1;
- (void)configCanvasSizeWithOperation:(id)a0 completion:(id /* block */)a1;
- (BOOL)isValidSize:(struct CGSize { double x0; double x1; })a0;
- (void)resetCanvasSizeIfNeededWithOperation:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)execute;
- (id)init;
- (void)dealloc;

@end
