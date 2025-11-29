@class AWESearchAlienatedTabManager, AWESearchTabGuideResponse, NSString, AWESearchTabGuideTrackManager, AWESearchResultViewController, AWESearchSlidingTabbarView;
@protocol AWESearchTabGuideStorageProtocol, AWESearchTabManagerProtocol;

@interface AWESearchTabGuideManager : NSObject <AWESearchTabGuideByteSyncManagerDelegate>

@property (weak, nonatomic) AWESearchSlidingTabbarView *slidingTabbarView;
@property (weak, nonatomic) id<AWESearchTabManagerProtocol> tabManager;
@property (weak, nonatomic) AWESearchAlienatedTabManager *alienatedTabManager;
@property (weak, nonatomic) AWESearchResultViewController *searchResultViewController;
@property (retain, nonatomic) AWESearchTabGuideResponse *tabGuideResponse;
@property (retain, nonatomic) id<AWESearchTabGuideStorageProtocol> storageManager;
@property (retain, nonatomic) AWESearchTabGuideTrackManager *trackManager;
@property (copy, nonatomic) id /* block */ popViewClick;
@property (copy, nonatomic) NSString *preLogID;
@property (nonatomic) BOOL isFromEcommerce;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getBanedGuidIDList;
+ (BOOL)isTabButtonVisiable:(id)a0;
+ (BOOL)checkExitWithAction:(id)a0 exitRule:(id)a1 isGlobal:(BOOL)a2;

- (void)beginRefresh;
- (void)registerByteSync;
- (id)getCurrentTabGuide;
- (void)updateMerchandiseSearchRequestTabGuideTrackParams:(id)a0;
- (void)tabGuideShow:(id)a0;
- (id)guideWithIndex:(long long)a0;
- (void)tabGuidInfoUpdate:(id)a0;
- (BOOL)checkDemotionWithTabGuide:(id)a0;
- (BOOL)checkFrequencyWithGuide:(id)a0;
- (void)tabGuideClick:(id)a0 currentTabType:(unsigned long long)a1;
- (id)guideWithTabType:(id)a0;
- (void)updateGeneralSearchRequestTabGuideTrackParams:(id)a0;
- (void)currentTabRefresRequestFinish;
- (id)initWithSlidingTabbarView:(id)a0 tabManager:(id)a1 alienatedTabManager:(id)a2 searchResultViewController:(id)a3;
- (void)reDrawAfterTabViewUpdate;
- (void)bottonTappedWithIndex:(long long)a0 currentTabType:(unsigned long long)a1;
- (void)updateWithTabGuide:(id)a0 cancelFlag:(BOOL)a1;
- (void)handleByteSyncCache;
- (void)tabSelectWithIndex:(long long)a0;
- (BOOL)handelMessage:(id)a0;
- (void)updateWithTabGuide:(id)a0 cancelFlag:(BOOL)a1 isAsync:(BOOL)a2;
- (BOOL)isEcomSearchVisible;
- (BOOL)isGeneralSearchVisiable;
- (void).cxx_destruct;
- (void)dismissPopover;
- (void)dealloc;

@end
