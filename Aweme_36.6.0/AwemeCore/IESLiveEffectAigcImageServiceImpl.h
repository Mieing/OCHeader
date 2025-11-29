@class NSMutableDictionary, NSString, IESLiveGCDTimer, NSMutableSet, NSMutableArray, IESLiveFaceStickerApi;

@interface IESLiveEffectAigcImageServiceImpl : IESLiveGeneralBaseService <IESLiveEffectAigcImageService, IESLiveAnchorEffectBaseEvent>

@property (retain, nonatomic) IESLiveFaceStickerApi *stickerApi;
@property (nonatomic) BOOL isFetchingHistoryData;
@property (retain, nonatomic) NSMutableDictionary *effectTaskDict;
@property (retain, nonatomic) NSMutableArray *historyDownloadCallbackList;
@property (retain, nonatomic) IESLiveGCDTimer *taskCheckTimer;
@property (retain, nonatomic) NSMutableSet *taskIds;
@property (retain, nonatomic) IESLiveGCDTimer *aigcBgEffectiveUseTimer;
@property (nonatomic) double lastAigcBgEffectStartUseTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (id)serviceActionsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (BOOL)serviceNeedBringInAnchorRoom;
- (void)serviceDidReBind;
- (void)serviceUninstall;
- (void)onEffectRenderWithEffect:(id)a0 item:(id)a1 extra:(id)a2;
- (void)onEffectRemoveWithEffect:(id)a0 item:(id)a1 extra:(id)a2;
- (void)stopEffectImageBgRender:(id)a0;
- (void)renderEffectBgImages:(id)a0 effect:(id)a1;
- (void)cleanHistoryData;
- (id)aigcBgTaskModelForEffect:(id)a0;
- (BOOL)isHistoryDataReady;
- (void)stopTaskCheckTimer;
- (void)startAigcBgEffectiveUseTimer;
- (void)fetchAigcBackgroundHistoryData:(id /* block */)a0;
- (void)generateEffectAigcBackground:(id)a0 keyWord:(id)a1 completion:(id /* block */)a2;
- (void)onAigcBgEffectiveUseScheduled;
- (BOOL)isInGuidePage;
- (void)stopAigcBgEffectiveUseTimer;
- (BOOL)isAigcBgEffect:(id)a0;
- (void)processEffectTaskData:(id)a0;
- (void)startTaskCheckTimer;
- (void)doSelectAigcBgEffectInGuidePage:(id)a0;
- (void)startRenderAigcBg:(id)a0 effect:(id)a1;
- (void)showAigcVideoGuideView:(id)a0;
- (void).cxx_destruct;
- (void)setup;

@end
