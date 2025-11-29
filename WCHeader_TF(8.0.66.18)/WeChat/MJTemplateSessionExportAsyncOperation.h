@class MJTemplateAsyncExportInfo;

@interface MJTemplateSessionExportAsyncOperation : MJTemplateSessionExportOperation

@property (retain, nonatomic) MJTemplateAsyncExportInfo *asyncExportInfo;

- (void)exportCreationWithProgressHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)cancelExportingCreationWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
