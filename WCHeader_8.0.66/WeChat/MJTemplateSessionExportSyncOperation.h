@class UIImage;

@interface MJTemplateSessionExportSyncOperation : MJTemplateSessionExportOperation

@property (retain, nonatomic) UIImage *coverImage;

- (id)initWithMaasCore:(id)a0 maasSession:(id)a1 sessionKey:(id)a2 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a3 outputFilePath:(id)a4 exportSettings:(id)a5 progressHandler:(id /* block */)a6 resultHandler:(id /* block */)a7;
- (void)dealloc;
- (void)exportCreationWithProgressHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)cancelExportingCreationWithCompletionHandler:(id /* block */)a0;
- (void)applicationDidEnterBackground:(id)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;

@end
