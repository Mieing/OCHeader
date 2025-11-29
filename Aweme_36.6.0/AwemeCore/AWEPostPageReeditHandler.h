@class NSString, AWEPublishAwemeResourcesHandler, AWEAwemeModel, AWETwoTuple;
@protocol IESServiceRegister, IESServiceProvider, AWEPostPagePlayerService, AWEPostPageContext;

@interface AWEPostPageReeditHandler : NSObject <AWEPostPageReeditService>

@property (retain, nonatomic) AWEPublishAwemeResourcesHandler *awemeResourceHandler;
@property (retain, nonatomic) AWETwoTuple *awemeResourcesStateSignal;
@property (weak, nonatomic) id<IESServiceRegister, IESServiceProvider> serviceContainer;
@property (readonly, weak, nonatomic) id<AWEPostPagePlayerService> player;
@property (copy, nonatomic) id /* block */ configLoadingAnchorView;
@property (retain, nonatomic) AWEAwemeModel *reeditAweme;
@property (copy, nonatomic) NSString *currentMusicId;
@property (readonly, nonatomic) id<AWEPostPageContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindServices:(id)a0;
- (BOOL)enableEdit;
- (void)trackReeditDownloadVideoMonitorWithExtraParams:(id)a0;
- (void)configSliceRequest:(id)a0;
- (void)configSliceAndBackgroundDownloadRequest:(id)a0;
- (void)fetchAwemeResourcesSilently:(BOOL)a0 completion:(id /* block */)a1;
- (void)cancelFetchAwemeResources;
- (BOOL)fetchAwemeResourcesWithSuccess:(id /* block */)a0;
- (void)fetchReeditDataIfNeed;
- (id)genOriginalModelWithAweme:(id)a0;
- (void)rebuildEditService;
- (BOOL)fetchAwemeFinished;
- (void)updateFromAweme;
- (void).cxx_destruct;

@end
