@class IESLiveAudienceRoomBaseConfig, IESLiveComponentBootLoader, IESLiveComponentSyncManager;
@protocol IESLiveRoomService, IESLiveAudienceComponentLoaderDelegate, IESLiveGeneralService;

@interface IESLiveAudienceComponentLoader : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) IESLiveAudienceRoomBaseConfig *config;
@property (weak, nonatomic) id<IESLiveAudienceComponentLoaderDelegate> delegate;
@property (retain, nonatomic) IESLiveComponentBootLoader *realLoader;
@property (retain, nonatomic) id<IESLiveGeneralService> generalServiceManager;
@property (retain, nonatomic) IESLiveComponentSyncManager *componentSyncManager;
@property (nonatomic) BOOL isCancelLoadBySlide;
@property (nonatomic) BOOL enterComponentReused;

- (BOOL)isLinkmicRoom:(id)a0;
- (void)cancelLoadComponents;
- (void)setupOptimizeConfig;
- (void)loadGeneralServiceIfNeeded;
- (void)loadComponentLoader;
- (void)loadComponentStrategyMgr;
- (void)loadGeneralService;
- (BOOL)openECLiveShelfOrGoodsDetail;
- (BOOL)openLiveLifeShelfOrGoodsDetail;
- (long long)getDegradationLevel;
- (void)refreshSyncGroupWithInfo:(id)a0 show:(BOOL)a1;
- (id)initWithRoomConfig:(id)a0 delegate:(id)a1;
- (void)enterRoomSuccessCheckReuseIfNeed;
- (void)exitRoomCheckReuseIfNeed;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)prepareForClose;

@end
