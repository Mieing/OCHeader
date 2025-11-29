@class ACCCameraSubscription, NSString, AWEVideoPublishViewModel, ACCSideslipPanelUniTemplateDownloadManager;
@protocol IESServiceProvider;

@interface ACCEditOneClickFilmDownLoadService : NSObject <ACCSideslipPanelUniTemplateDownloadDelegate, ACCEditOneClickFilmDownLoadService, ACCSideslipPropPanelDownloadService>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (retain, nonatomic) ACCSideslipPanelUniTemplateDownloadManager *oneClickDownloadManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)downloadDataModelIfNeed:(id)a0;
- (void)prefetchDataModelsIfNeed:(id)a0;
- (id)dataModelDownloadProgress:(id)a0;
- (id)initWithServiceProvider:(id)a0 repository:(id)a1;
- (id)convertToCKModelWithDataModel:(id)a0;
- (void)uniTemplateDownloader:(id)a0 didBeginDownloadTemplate:(id)a1;
- (void)uniTemplateDownloader:(id)a0 templateModel:(id)a1 progressDidChange:(double)a2;
- (void)uniTemplateDownloader:(id)a0 didFinishDownload:(id)a1;
- (void)uniTemplateDownloader:(id)a0 didFailDownload:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
