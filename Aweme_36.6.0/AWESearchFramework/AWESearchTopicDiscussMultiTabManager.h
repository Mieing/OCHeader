@class NSMutableDictionary, AWESearchBaseContainerConfig, AWESearchResultVerticalBaseViewController, AWESearchDiscussInGeneralCachalotDataController, NSDictionary, NSString;
@protocol CachalotRenderPipelineComponentViewModel;

@interface AWESearchTopicDiscussMultiTabManager : NSObject <AWESearchMultiTabManagerImplProtocol>

@property (retain, nonatomic) AWESearchBaseContainerConfig *discussContainerConfig;
@property (retain, nonatomic) AWESearchDiscussInGeneralCachalotDataController *discussDataController;
@property (nonatomic) BOOL discussFirstDataReady;
@property (weak, nonatomic) AWESearchResultVerticalBaseViewController *searchResultVC;
@property (retain, nonatomic) NSMutableDictionary *tabDataMap;
@property (nonatomic) long long currentTab;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> selectTabCardViewModel;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> anchorViewModel;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshResponse:(id)a0;
- (id)findViewModelsArrayAfterSelectTabCard;
- (void)prepareClear;
- (void)rollbackClear;
- (void)confirmClear;
- (id)initWithSearchResultVC:(id)a0;
- (BOOL)hasDataForTab:(long long)a0;
- (void)loadDataForTab:(long long)a0 completion:(id /* block */)a1;
- (void)showDataForTab:(long long)a0 completion:(id /* block */)a1;
- (void)loadContainerConfigFromSearchTabManagerIfNeeded:(id)a0;
- (void)syncSearchImmersiveConfigIfNeeded;
- (void)updateAnchorViewModel;
- (void).cxx_destruct;

@end
