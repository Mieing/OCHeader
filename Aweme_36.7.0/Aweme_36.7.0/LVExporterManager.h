@class VELVCompileManager;

@interface LVExporterManager : NSObject

@property (retain, nonatomic) VELVCompileManager *exporter;

- (void)getPreviewImage:(id /* block */)a0;
- (void)cancelTranscode:(id /* block */)a0;
- (id)initWithExportData:(id)a0 config:(id)a1;
- (void)startExportWithProgressBlock:(id /* block */)a0 completeBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
