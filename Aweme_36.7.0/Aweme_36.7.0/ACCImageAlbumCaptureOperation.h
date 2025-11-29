@class ACCImageAlbumEditor, ACCImageAlbumEditorExportInputData;

@interface ACCImageAlbumCaptureOperation : ACCImageAlbumExportBaseOperation

@property (retain, nonatomic) ACCImageAlbumEditor *editor;
@property (retain, nonatomic) ACCImageAlbumEditorExportInputData *inputData;
@property (copy, nonatomic) id /* block */ completeHandler;

- (id)initWithEditor:(id)a0 inputData:(id)a1;
- (void).cxx_destruct;
- (void)start;

@end
