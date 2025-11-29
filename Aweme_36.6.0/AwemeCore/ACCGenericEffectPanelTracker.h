@class NSString, NSDictionary, NSMutableSet, AWEVideoPublishViewModel;
@protocol ACCEditEffectPanelServiceProtocol, IESServiceProvider;

@interface ACCGenericEffectPanelTracker : NSObject <ACCGenericEffectPanelTrackerService>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<ACCEditEffectPanelServiceProtocol> genericEffectPanelService;
@property (copy, nonatomic) NSDictionary *commonTrackerInfo;
@property (retain, nonatomic) NSMutableSet *showedIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)a0 extraParams:(id)a1;
- (void)trackVideoPlayFinish;
- (void)trackerPropSkipWithShouldReport:(BOOL)a0;
- (void)trackerPropClick;
- (void)trackerPropCancelWith:(id)a0;
- (id)initWithServiceProvider:(id)a0 repository:(id)a1;
- (void)trackClickCategoryTab;
- (void)trackGenericEffectShow:(id)a0 index:(unsigned long long)a1 extraParams:(id)a2;
- (void)trackGenericEffectSkipWithCurrentCategory:(id)a0 LastIndexPath:(id)a1 currentIndexPath:(id)a2;
- (void)trackGenericEffectPanelCancel;
- (void)trackGenericEffectPanelSave;
- (void)trackerFavoriteStatusChanged:(BOOL)a0 effectModel:(id)a1 currentTabName:(id)a2;
- (id)editPropExtraInfoFor:(id)a0;
- (id)trackerTryParams;
- (void)setupCommonTrackerInfo;
- (id)propSelectedFromWithSearchMethod:(id)a0 tabName:(id)a1;
- (id)mvSourceWithCategoryName:(id)a0;
- (id)currentModelID;
- (id)currentPropSelectedFrom;
- (void).cxx_destruct;

@end
