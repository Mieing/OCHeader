@class ACCImageAlbumItemModel, ACCImageAlbumEditor, ACCImageAlbumEditorExportInputData;

@interface ACCImageAlbumPlayerPreviewOperation : ACCImageAlbumExportBaseOperation

@property (retain, nonatomic) ACCImageAlbumEditor *editor;
@property (retain, nonatomic) ACCImageAlbumEditorExportInputData *inputData;
@property (readonly, nonatomic) ACCImageAlbumItemModel *reloadItemModel;
@property (readonly, nonatomic) long long reloadIndex;
@property (readonly, nonatomic) BOOL isReloadOperation;
@property (copy, nonatomic) id /* block */ completeHandler;
@property (copy, nonatomic) id /* block */ willStartHandler;

- (id)initWithEditor:(id)a0 inputData:(id)a1;
- (void)p_startForReloadOperation;
- (id)initForReloadWithEditor:(id)a0 imageItem:(id)a1 index:(long long)a2;
- (id)imageItemId;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (BOOL)enableCancel;

@end
