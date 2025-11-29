@class HTSEventContext, IESLiveGeneralServiceLaunchParam, NSRecursiveLock, IESLiveGuideModel, NSLock, NSMutableDictionary, NSString, NSMutableArray, IESLiveComponentContext;

@interface IESLiveGeneralServiceManager : NSObject <IESLiveGeneralService, IESLiveDIExteriorDelegate>

@property (retain, nonatomic) IESLiveGeneralServiceLaunchParam *launchParam;
@property (nonatomic) unsigned long long enterStage;
@property (retain, nonatomic) NSMutableArray *registerClasses;
@property (retain, nonatomic) NSMutableDictionary *lazyProtocolsMap;
@property (retain, nonatomic) NSMutableDictionary *lazyActionsMap;
@property (retain, nonatomic) NSMutableDictionary *serviceEntityMap;
@property (retain, nonatomic) NSMutableDictionary *generalServiceImps;
@property (nonatomic) BOOL leaved;
@property (retain, nonatomic) id room;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveGuideModel *guideModel;
@property (nonatomic) BOOL isFromGuidePage;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSLock *mapLock;
@property (retain, nonatomic) NSMutableDictionary *serviceProtocolPool;
@property (retain, nonatomic) NSMutableDictionary *serviceActionPool;
@property (nonatomic) BOOL optEnable;
@property (nonatomic) BOOL lazyLoadEnable;
@property (retain, nonatomic) NSMutableDictionary *generalServiceProtocols;
@property (retain, nonatomic) NSMutableDictionary *existServiceImps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)remoteRoomDataReady:(id)a0;
- (void)launchWithParam:(id)a0;
- (void)loadBatchWithRoom:(id)a0 trackContext:(id)a1 componentContext:(id)a2;
- (void)setExistService:(id)a0;
- (id)getAllGeneralServices;
- (void)notifyObjectWithProtocol:(id)a0;
- (void)notifySingletonObjectWithProtocol:(id)a0;
- (void)notifyPrototypeObjectWithProtocol:(id)a0;
- (void)lacunchAllService;
- (id)reBindRoomInfoWithService:(id)a0;
- (id)loadRoomInfoWithService:(id)a0;
- (void)clearAllService;
- (void)checkSaveServiceProtocols;
- (void)saveLazyInfoWithClass:(Class)a0;
- (void)checkProtocolAndActionBindService:(id)a0;
- (void)bindProtocolServiceIntoPool:(id)a0 service:(id)a1;
- (void)bindActionIntoPool:(id)a0 service:(id)a1;
- (void)lazyCheckAndLoadWithProtocol:(id)a0;
- (id)dynamicCreateService:(Class)a0;
- (BOOL)checkUseProtocol:(id)a0;
- (id)serviceWithProtocol:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)prepareForClose;
- (id)createService:(Class)a0;

@end
