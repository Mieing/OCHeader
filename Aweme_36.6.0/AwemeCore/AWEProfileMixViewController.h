@class NSString, AWEProfileMixScrollTailView, AWEUserProfileEventCommonParamsHandler, AWEListDataController, AWEProfileMixCollectionView, NSMutableArray, DUXPopover, AWEProfileContext, AWEProfileMixDataManager;
@protocol AWEDiscoverDPlayletProfileListDataControllerProtocol;

@interface AWEProfileMixViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, AWEProfileTabMergedPrivatePostGuideProtocol>

@property (retain, nonatomic) AWEProfileMixScrollTailView *footerView;
@property (nonatomic) BOOL isTransfering;
@property (nonatomic) BOOL isMixManagerRecommendTipShowDidRecord;
@property (nonatomic) BOOL mixManagerNeedRecommendTip;
@property (retain, nonatomic) AWEProfileMixCollectionView *collectionView;
@property (nonatomic) double currentOffset;
@property (retain, nonatomic) NSMutableArray *loggedArray;
@property (nonatomic) BOOL mixManageShowTracked;
@property (retain, nonatomic) NSMutableArray *modelArray;
@property (retain, nonatomic) NSMutableArray *cellSizeArray;
@property (nonatomic) double lastReportTime;
@property (retain, nonatomic) DUXPopover *popover;
@property (retain, nonatomic) AWEProfileMixDataManager *dataManager;
@property (retain, nonatomic) AWEListDataController *playletDataController;
@property (retain, nonatomic) AWEListDataController<AWEDiscoverDPlayletProfileListDataControllerProtocol> *seriesContentSubTypeDataController;
@property (retain, nonatomic) NSString *referString;
@property (retain, nonatomic) NSString *userID;
@property (retain, nonatomic) AWEUserProfileEventCommonParamsHandler *eventCommonParamsHandler;
@property (nonatomic) double horizonalPadding;
@property (nonatomic) BOOL fromHome;
@property (weak, nonatomic) AWEProfileContext *profileContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)updateFooterFrame;
- (void)updateMixManagerEntranceStyle;
- (BOOL)isMixManagerEntranceWithRecommendMixTip;
- (void)refreshCellSizeArray;
- (void)showPrivatePostGuidePopoverOn:(id)a0 needForce:(BOOL)a1;
- (void)updateMixManagerRecommendTipClickTime;
- (void)resetMixManagerRecommendTipShowTime;
- (void)trackClickModel:(id)a0 extraParams:(id)a1;
- (void)p_mixLiveCellTracker:(BOOL)a0;
- (id)compilationTypeWithModel:(id)a0;
- (void)updateMixManagerRecommendTipShowTime;
- (BOOL)isUseOptimizedRecommendMix;
- (id)profileMixManagerRecommendTipShowTimeRecordKey;
- (id)profileMixManagerRecommendTipClickTimeRecordKey;
- (id)p_ignoreAWEAwemeModel;
- (id)privatePostEntranceCell;
- (BOOL)canShowPrivatePostPopover;
- (id)showPopoverWithTitle:(id)a0 onCell:(id)a1;
- (void)showPopoverForRecycledWorksWithCell:(id)a0 needCheckPrivate:(BOOL)a1;
- (BOOL)canShowPopoverForRecycledWorks;
- (BOOL)isMixBarVisible;
- (void)showPrivatePostPopoverImmediately;
- (id)animationTargetViewForPrivatePostGuide;
- (id)mixBarForPrivatePostGuide;
- (void)scrollToLeadPositionIfNeed:(BOOL)a0;
- (void)showRecycledWorksPopoverIfNeeded;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)isCurrentUser;
- (void)startTransfer;

@end
