@class NSString, NSMutableDictionary, DitoPageContext;
@protocol DitoMonitorExtensionDataSourceProtocol, DitoExtensionContainerProtocol;

@interface DitoChunkMonitorExtension : NSObject <DitoMonitorDelegateProtocol, DitoExtensionProtocol, DitoMonitorExtensionProtocol>

@property (nonatomic) double pageCreateTime;
@property (nonatomic) double sendRequestTime;
@property (nonatomic) BOOL startUp;
@property (nonatomic) BOOL requestFailed;
@property (retain, nonatomic) NSMutableDictionary *chunkMonitors;
@property (nonatomic) double startTime;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (weak, nonatomic) id<DitoMonitorExtensionDataSourceProtocol> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithRouterParamDict:(id)a0;
- (void)didSendRequest;
- (void)didEndParseData:(id)a0 error:(id)a1;
- (void)didLoadPageModel:(id)a0;
- (void)didEndReload;
- (void)didEndRequestWithResponse:(id)a0 error:(id)a1;
- (id)fetchTrackParams;
- (id)extraParamsWithChunkName:(id)a0;
- (id)requestCostParamsForResponse:(id)a0 chunkName:(id)a1;
- (id)reloadingChunkName;
- (void).cxx_destruct;
- (id)init;
- (id)pageName;

@end
