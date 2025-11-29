@class NSString, AWEAwemeModel, AWELiveNewPreStreamViewModel, AWELivePreStreamContext;

@interface AWELivePreStreamContextServiceImpl : NSObject <IESLivePreStreamContextService>

@property (retain, nonatomic) AWELivePreStreamContext *pageContext;
@property (retain, nonatomic) AWELiveNewPreStreamViewModel *viewModel;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addKey:(id)a0 handler:(id /* block */)a1;
- (id)enterFrom;
- (void)postForKey:(id)a0;
- (id)currentRoomID;
- (void)removeKey:(id)a0 handler:(id /* block */)a1;
- (void)didSetAttachingDIContext;
- (void)removeHandlersForKey:(id)a0;
- (void)configWithModel:(id)a0;
- (BOOL)enableLivePreMix;
- (id)commonTrackContext;
- (long long)liveAdType;
- (double)bottomContainerBottomOffSet;
- (void)clickEnterLiveRoom:(id)a0;
- (BOOL)isOldStyle;
- (BOOL)prestreamMuteShow;
- (BOOL)prestreamMuteExpand;
- (BOOL)enablePreLiteInteraction;
- (BOOL)enablePreHorizontalContainer;
- (BOOL)enablePreEnterRoom;
- (void)trackPreviewModuleShow:(id)a0;
- (void)trackPreviewModuleClick:(id)a0;
- (void)setupPreviewInteractStatus;
- (BOOL)enablePreBootLoader;
- (id)initWithContext:(id)a0 viewModel:(id)a1;
- (void).cxx_destruct;

@end
