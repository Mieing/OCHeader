@class NPGenericTemplateService_OC, NSMutableDictionary, ACCCameraSubscription, NSMutableSet;
@protocol IESServiceProvider;

@interface ACCSideslipPanelUniTemplateDownloadManager : NSObject

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) NPGenericTemplateService_OC *templateService;
@property (retain, nonatomic) NSMutableDictionary *templateDownloadProgressDic;
@property (retain, nonatomic) NSMutableSet *prefetchingTemplatesSet;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (nonatomic) long long isMultiContent;

- (BOOL)isPrefetch:(id)a0;
- (id)initWithNPGenericTemplatService:(id)a0;
- (void)downloadTemplateIfNeed:(id)a0;
- (void)prefetchOneClickFilmIfNeed:(id)a0;
- (id)progressWithTemplateModel:(id)a0;
- (void)removeTemplateModelPrefetched:(id)a0;
- (void)recordTemplateModelPrefetched:(id)a0;
- (void)prefetchTemplatesIfNeed:(id)a0;
- (void)notifyObserversDidBeginDownloadTemplate:(id)a0;
- (void)notifyObserversDidFinishDownloadTemplate:(id)a0;
- (void)notifyObserversDidChangeProgressWithTemplate:(id)a0 progress:(double)a1;
- (void)addTemplateToDownloadQueue:(id)a0;
- (void)removeDownloadRecordWithTemplateModel:(id)a0;
- (void)recordDownloadProgress:(double)a0 templateModel:(id)a1;
- (void)notifyObserversDidFailDownloadTemplate:(id)a0 error:(id)a1;
- (void)notifyObserverChangePrefetchToNormal:(id)a0;
- (void)notifyObserversDidChangePrefetchStatusWithTemplate:(id)a0;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
