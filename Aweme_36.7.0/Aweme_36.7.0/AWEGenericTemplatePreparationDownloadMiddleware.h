@class AWEGenericTemplateApplierContext, NSMutableDictionary, NSString, ACCSideslipPanelUniTemplateDownloadManager;

@interface AWEGenericTemplatePreparationDownloadMiddleware : NSObject <ACCSideslipPanelUniTemplateDownloadDelegate, AWEGenericTemplatePreparationMiddleware>

@property (retain, nonatomic) AWEGenericTemplateApplierContext *context;
@property (retain, nonatomic) ACCSideslipPanelUniTemplateDownloadManager *downloadManager;
@property (retain, nonatomic) NSMutableDictionary *configMapping;
@property (retain, nonatomic) NSMutableDictionary *completionMapping;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)processTemplate:(id)a0 applyConfig:(id)a1 completion:(id /* block */)a2;
- (void)uniTemplateDownloader:(id)a0 templateModel:(id)a1 progressDidChange:(double)a2;
- (void)uniTemplateDownloader:(id)a0 didFinishDownload:(id)a1;
- (void)uniTemplateDownloader:(id)a0 didFailDownload:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
