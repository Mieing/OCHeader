@class NSString, NSDictionary, NSMutableDictionary, NSMutableSet, AWEVideoPublishViewModel;
@protocol ACCSideslipPropPanelService, ACCSideslipPropPanelExtraTrackerInfoProtocol, IESServiceProvider;

@interface ACCSideslipAIGCEffectPanelTrackerServiceImpl : NSObject <ACCSideslipAIGCEffectPanelTrackerServiceProtocol>

@property (retain, nonatomic) NSDictionary *commonTrackerInfo;
@property (copy, nonatomic) NSString *propSelectedFromPrefix;
@property (retain, nonatomic) id<ACCSideslipPropPanelExtraTrackerInfoProtocol> extraInfoImpl;
@property (retain, nonatomic) NSMutableDictionary *extraInfoBlockDic;
@property (retain, nonatomic) NSMutableDictionary *showStateEnterMethodDic;
@property (retain, nonatomic) NSMutableSet *showenPropIdentifiers;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackVideoPlayFinish;
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
- (void)resetPropShow;
- (void)trackerPropClick:(BOOL)a0;
- (void)trackClickAddCellData:(id)a0 index:(unsigned long long)a1;
- (void)trackEffectDownloadStatus:(id)a0;
- (id)initWithServiceProvider:(id)a0 repository:(id)a1;
- (void).cxx_destruct;

@end
