@interface OMCExportSession : NSObject

@property (readonly, nonatomic) struct SharedPtr<XVCExportSession> { struct XVCExportSession *_ptr; } backingSession;

- (id)init;
- (void)dealloc;
- (void)startExportingWithOutputFilePath:(id)a0 exportSettings:(id)a1 timeline:(id)a2 exportTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a3 startHandler:(id /* block */)a4 progressHandler:(id /* block */)a5 completionHandler:(id /* block */)a6;
- (void)cancelExportingWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
