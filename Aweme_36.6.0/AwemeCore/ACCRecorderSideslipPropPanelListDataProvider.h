@class ACCSideslipPropFetchListStrategy, NSArray, NSDictionary, AWEVideoPublishViewModel, ACCSideslipPropRearLoadCellModel, NSString;
@protocol ACCPropPickerService, ACCRecordPropService, ACCSideslipPropInternalService, AWERedPackThemeService, ACCRecordPropRankService, ACCSideslipPropPanelService, ACCSideslipPropService, ACCSideslipPropPanelFocusHandleService, ACCResourceLoadedService, ACCSideslipPropPanelCellModelBuilderProtocol, IESServiceProvider;

@interface ACCRecorderSideslipPropPanelListDataProvider : NSObject <ACCStickerPickerServiceSubscriber, ACCRecordPropServiceSubscriber, ACCSideslipPropServiceSubscriber, AWERedPackThemeServiceSubscriber, ACCRecordPropRankServiceSubscriber, ACCSideslipPropPanelListDataProvider>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<ACCPropPickerService> propPickerService;
@property (weak, nonatomic) id<ACCRecordPropService> propService;
@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (weak, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (weak, nonatomic) id<ACCSideslipPropPanelFocusHandleService> sideslipFocusHandleService;
@property (weak, nonatomic) id<ACCResourceLoadedService> resourceLoadedService;
@property (weak, nonatomic) id<ACCSideslipPropInternalService> sideslipPropInternalService;
@property (weak, nonatomic) id<ACCSideslipPropPanelCellModelBuilderProtocol> cellModelBuilder;
@property (weak, nonatomic) id<AWERedPackThemeService> redPackThemeService;
@property (weak, nonatomic) id<ACCRecordPropRankService> newPropRankerService;
@property (nonatomic) unsigned long long loadState;
@property (retain, nonatomic) ACCSideslipPropFetchListStrategy *fetchListStrategy;
@property (nonatomic) BOOL isPlaceHolder;
@property (retain, nonatomic) NSArray *totalList;
@property (retain, nonatomic) NSArray *lastList;
@property (retain, nonatomic) NSDictionary *propPickCellModelDic;
@property (retain, nonatomic) ACCSideslipPropRearLoadCellModel *rearLoadCellModel;
@property (nonatomic) long long hasShowRearLoadCell;
@property (nonatomic) long long rightFirstIndex;
@property (nonatomic) long long expectFocusIndex;
@property (nonatomic) BOOL expectFocusAnimated;
@property (nonatomic) BOOL hasShowExtendItem;
@property (nonatomic) BOOL hasInsertPanelProp;
@property (nonatomic) BOOL insertPropsFinished;
@property (copy, nonatomic) NSArray *hiddenIndexesForExposure;
@property (retain, nonatomic) NSString *lastUseRecentEffectId;
@property (nonatomic) BOOL skipAutoLocate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isSupportCancelItem;
@property (readonly, nonatomic) unsigned long long listDataType;

+ (id)listDataProviderWithServiceProvider:(id)a0 repository:(id)a1;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)propServiceWillDismissPanel:(id)a0;
- (void)propServiceWillApplyProp:(id)a0 propSource:(long long)a1 changeReason:(long long)a2;
- (void)sideslipPropService:(id)a0 willChangeShowState:(unsigned long long)a1;
- (id)cellModelWithModelId:(id)a0;
- (id)tabNameWithIndex:(long long)a0;
- (void)resetInitialFocusInfo;
- (void)resetInitialCellModels;
- (id)listDataSourceDesc;
- (BOOL)isListDataFormCache;
- (void)showDiscoverItemIfNeeded;
- (void)hiddenDiscoverItemIfNeeded;
- (void)debugSideslipPropListWithOriginalList:(id)a0 rankedList:(id)a1 insertPosition:(unsigned long long)a2 topScoreProps:(id)a3 favoriteCapability:(id)a4 holdPropList:(id)a5;
- (void)debugMainPanelPropListWithOriginalList:(id)a0 rankedList:(id)a1 insertPosition:(unsigned long long)a2 topScoreProps:(id)a3 favoriteCapability:(id)a4 holdPropList:(id)a5;
- (id)initWithServiceProvider:(id)a0 repository:(id)a1;
- (void)stickerPickerService:(id)a0 didFinishLoadStickersWithCategory:(id)a1 tabIndex:(long long)a2;
- (void)redPackThemeServiceApplySticker:(id)a0;
- (void)p_bindServices;
- (void)p_buildInitialCellModels;
- (void)updatePitayaPropRankList;
- (void)rankPropsAt:(long long)a0 topProps:(id)a1 holdPropList:(id)a2 forceRerank:(BOOL)a3;
- (id)updateSideslipPropListWithInsertPosition:(unsigned long long)a0 topScoreProps:(id)a1 holdPropList:(id)a2 forceRerank:(BOOL)a3;
- (void)updateHotStickersInMainPanel:(id)a0 insertPosition:(unsigned long long)a1 topScoreProps:(id)a2 holdPropList:(id)a3;
- (void)p_buildPlaceHolderCellModels;
- (id)primaryCategoryModelWithService:(id)a0;
- (void)p_handleListDataChangeWithNewSticker:(id)a0;
- (void)p_appendMoreCellModels;
- (BOOL)p_isSameShoot;
- (void)p_bindForShootSameMode;
- (id)p_filterWithCellModel:(id)a0 propPickDic:(id)a1;
- (void)p_recordCellModel:(id)a0 propPickDic:(id)a1;
- (BOOL)p_isContainCellModel:(id)a0 propPickDic:(id)a1;
- (void)onRerank:(unsigned long long)a0 pitayaRes:(id)a1;
- (void).cxx_destruct;

@end
