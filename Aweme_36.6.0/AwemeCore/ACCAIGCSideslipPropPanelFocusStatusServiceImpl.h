@class NSString;
@protocol ACCSideslipPropPanelDownloadService, ACCSideslipPropPanelService, IESServiceProvider, ACCSideslipAIGCPanelListDataProviderProtocol, ACCSideslipPropPanelUIConfigService;

@interface ACCAIGCSideslipPropPanelFocusStatusServiceImpl : NSObject <ACCSideslipPropPanelDownloadServiceSubscriber, ACCSideslipPropPanelFocusStatusService>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (weak, nonatomic) id<ACCSideslipPropPanelDownloadService> sideslipDownloadService;
@property (weak, nonatomic) id<ACCSideslipPropPanelUIConfigService> uiConfigService;
@property (weak, nonatomic) id<ACCSideslipAIGCPanelListDataProviderProtocol> aigcListDataProvider;
@property (nonatomic) BOOL showProgress;
@property (nonatomic) double progress;
@property (nonatomic) BOOL isFocusDownloadFailed;
@property (nonatomic) BOOL showRetryView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_bindService;
- (void)p_updateFocusDownloadFailedShowStatus;
- (void)p_updateFocusProgressShowStatus;
- (void)downloadService:(id)a0 didBeginDownloadDataModel:(id)a1;
- (void)downloadService:(id)a0 dataModel:(id)a1 downloadProgressChange:(double)a2;
- (void)downloadService:(id)a0 didFinishDownloadDataModel:(id)a1;
- (void)downloadService:(id)a0 didFailDownloadDataModel:(id)a1 withError:(id)a2;
- (void)toggleShowRetryViewState:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;

@end
