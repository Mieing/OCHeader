@class NSOperationQueue, ACCImageAlbumEditor, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ACCImageAlbumExportManager : NSOperation

@property (retain, nonatomic) ACCImageAlbumEditor *imageEditor;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *exportingLock;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *exportQueue;

+ (id)sharedManager;

- (void)p_setup;
- (void)exportImagesWithImageItems:(id)a0 containerSize:(struct CGSize { double x0; double x1; })a1 progress:(id /* block */)a2 onSucceed:(id /* block */)a3 onFaild:(id /* block */)a4;
- (void)releaseImageEditorIfEnable;
- (void)exportImagesWithImageItems:(id)a0 containerSize:(struct CGSize { double x0; double x1; })a1 useUniqueId:(BOOL)a2 progress:(id /* block */)a3 onSucceed:(id /* block */)a4 onFaild:(id /* block */)a5;
- (void).cxx_destruct;
- (id)init;

@end
