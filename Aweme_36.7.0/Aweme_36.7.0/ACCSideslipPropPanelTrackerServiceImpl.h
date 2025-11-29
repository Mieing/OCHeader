@class NSMutableDictionary, NSDictionary, NSMutableSet, AWEVideoPublishViewModel, NSString, ACCEditorSideslipPanelPicTemplateTracker;
@protocol ACCSideslipPropPanelService, ACCSideslipPropService, IESServiceProvider, ACCRecordPropRankService, AWEStudioAIMateEditFeaturePublicAPI, ACCSideslipPropPanelExtraTrackerInfoProtocol;

@interface ACCSideslipPropPanelTrackerServiceImpl : NSObject <ACCSideslipPropServiceSubscriber, ACCSideslipPropPanelTrackerService>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (weak, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (weak, nonatomic) id<ACCRecordPropRankService> newPropRankerService;
@property (weak, nonatomic) id<AWEStudioAIMateEditFeaturePublicAPI> aiMateEditFeatureAPI;
@property (retain, nonatomic) NSMutableDictionary *showStateEnterMethodDic;
@property (retain, nonatomic) NSMutableSet *showenPropIdentifiers;
@property (retain, nonatomic) NSDictionary *commonTrackerInfo;
@property (copy, nonatomic) NSString *propSelectedFromPrefix;
@property (retain, nonatomic) id<ACCSideslipPropPanelExtraTrackerInfoProtocol> extraInfoImpl;
@property (retain, nonatomic) ACCEditorSideslipPanelPicTemplateTracker *picTemplateTracker;
@property (retain, nonatomic) NSMutableDictionary *extraInfoBlockDic;
@property (nonatomic) long long lastFocusIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sideslipPropService:(id)a0 willChangeShowState:(unsigned long long)a1;
- (void)trackVideoPlayFinish;
- (void)p_bindService;
- (void)trackerPropSkipWithShouldReport:(BOOL)a0;
- (void)trackerPropClick;
- (void)trackerPropCancelWith:(id)a0;
- (void)configCommonTrackerInfo:(id)a0;
- (void)configPropSelectedFromPrefix:(id)a0;
- (void)configExtraTrackerInfo:(id)a0;
- (void)setExtraInfoBlock:(id /* block */)a0 forTrackerMethod:(SEL)a1;
- (void)setEnterMethod:(id)a0 forShowState:(long long)a1;
- (id)enterMethodForShowState:(long long)a0;
- (BOOL)hasPropShow;
- (void)trackerPanelShow;
- (void)trackerPanelExpose;
- (void)trackerPanelClickDismiss;
- (void)trackerClickMore;
- (void)trackerClickSaveFavorite;
- (void)trackerClickCancelFavorite;
- (void)trackerPropShowWithIndex:(long long)a0;
- (void)trackerUnavailablePropShowWithIndex:(long long)a0;
- (void)trackerDidFinishEffectIconShowingWithParams:(id)a0;
- (void)trackerSlideslipFetchListDataPerformanceWithDuration:(double)a0 dataSource:(id)a1 isCache:(BOOL)a2 error:(id)a3;
- (void)startPerfMonitor;
- (void)stopPerfMonitor;
- (id)initWithServiceProvider:(id)a0 repository:(id)a1;
- (void)p_addExtraInfoForTrackerMethod:(SEL)a0 originArgs:(id)a1 originParam:(id)a2;
- (void)trackClickEditSlidebar;
- (id)trackerWithGenericTemplateModel:(id)a0 index:(long long)a1;
- (id /* block */)extraInfoBlockForTrackerMethod:(SEL)a0;
- (void).cxx_destruct;

@end
