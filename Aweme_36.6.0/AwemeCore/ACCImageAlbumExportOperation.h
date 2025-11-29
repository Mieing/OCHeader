@class NSArray, ACCImageAlbumEditor, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ACCImageAlbumExportOperation : ACCImageAlbumExportBaseOperation

@property (retain, nonatomic) ACCImageAlbumEditor *editor;
@property (retain, nonatomic) NSArray *inputDatas;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *exportingQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *exportSemaphore;
@property (nonatomic) BOOL shouldUnlockSemaphore;
@property (nonatomic) BOOL disableBackgroundExport;
@property (copy, nonatomic) id /* block */ succeedHandler;
@property (copy, nonatomic) id /* block */ faildHandler;
@property (copy, nonatomic) id /* block */ progressHandler;

- (id)initWithEditor:(id)a0 inputDatas:(id)a1 exportingQueue:(id)a2;
- (void)p_addBackgroundStateChangeObserveIfNeeded;
- (void)p_runExportWithIndex:(long long)a0 inputData:(id)a1 editor:(id)a2 complete:(id /* block */)a3;
- (void).cxx_destruct;
- (void)start;

@end
