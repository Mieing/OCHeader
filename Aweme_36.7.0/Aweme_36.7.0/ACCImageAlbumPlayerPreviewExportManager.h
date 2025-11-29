@class NSOperationQueue, ACCImageAlbumEditor;

@interface ACCImageAlbumPlayerPreviewExportManager : NSObject

@property (weak, nonatomic) ACCImageAlbumEditor *editor;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (copy, nonatomic) id /* block */ onOperationWillStart;
@property (copy, nonatomic) id /* block */ onReloadCompleteHandler;
@property (copy, nonatomic) id /* block */ onExportCompleteHandler;
@property (copy, nonatomic) id /* block */ onOperationsCountChanged;
@property (copy, nonatomic) id /* block */ onAllOperationsCompleteHandler;

- (id)initWithEditor:(id)a0;
- (void)p_setup;
- (void)cancelOperationsExcludeWithItemIdList:(id)a0;
- (void)addExportOperationWithItemModel:(id)a0 index:(long long)a1;
- (void)addReloadOperationWithItemModel:(id)a0 index:(long long)a1;
- (void)releaseAllOperations;
- (void).cxx_destruct;
- (long long)currentOperationCount;

@end
