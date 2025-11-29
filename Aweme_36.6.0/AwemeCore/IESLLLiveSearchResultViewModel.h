@class IESLLLiveShelfPagingLynxModuleOperator, IESLLLiveShelfPagingDataController, NSString, IESLLLiveShelfListSectionController, IESLLLiveShelfListSectionViewModel;
@protocol IESLLLiveShelfSearchResultDelegate;

@interface IESLLLiveSearchResultViewModel : AWEBaseListViewModel <IESLLLiveShelfListSectionControllerDelegate>

@property (nonatomic) BOOL hasConfigModule;
@property (retain, nonatomic) IESLLLiveShelfPagingLynxModuleOperator *lynxModuleOperator;
@property (weak, nonatomic) IESLLLiveShelfPagingDataController *dataController;
@property (weak, nonatomic) id<IESLLLiveShelfSearchResultDelegate> delegate;
@property (retain, nonatomic) IESLLLiveShelfListSectionViewModel *sectionVM;
@property (retain, nonatomic) IESLLLiveShelfListSectionController *sectionController;
@property (copy, nonatomic) NSString *searchId;
@property (nonatomic) long long footerState;
@property (copy, nonatomic) NSString *searchText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreListData;
- (void)setupViewModel;
- (void)cardWillDisplayWithItem:(id)a0 index:(long long)a1;
- (void)cardClickedWithItem:(id)a0 index:(long long)a1 isNative:(BOOL)a2 lynxParams:(id)a3;
- (void)cardBuyBtnClickedWithItem:(id)a0 index:(long long)a1 isNative:(BOOL)a2 lynxParams:(id)a3;
- (BOOL)couldCardBuyBtnClickedOnlyLogWithItem:(id)a0 index:(long long)a1 isNative:(BOOL)a2 lynxParams:(id)a3;
- (void)refreshCurrentState;
- (void)configLynxModuleBlock;
- (id)getGoodsModelsBy:(id)a0;
- (void)finishUpdateListWith:(unsigned long long)a0 cardList:(id)a1;
- (void)updateFromLynxModule:(id)a0 tabId:(long long)a1;
- (id)paramsForClickWithItem:(id)a0;
- (void)tableViewDidSelectRowWithItem:(id)a0 params:(id)a1 liveInfo:(id)a2 isNative:(BOOL)a3 lynxParams:(id)a4;
- (void)tableViewDidSelectBuyWithItem:(id)a0 params:(id)a1 liveInfo:(id)a2 isNative:(BOOL)a3 lynxParams:(id)a4;
- (void)checkPreloadPreviousOrNextPage:(long long)a0;
- (id)getGoodsModelBy:(id)a0;
- (void)autoPickUpCouponWithItem:(id)a0 params:(id)a1 liveInfo:(id)a2 fromPosition:(long long)a3;
- (void)updateWithModel:(id)a0 actionType:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)getVisibleIndexPaths;
- (void).cxx_destruct;
- (id)init;

@end
