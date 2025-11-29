@class AWEEcomSearchBaseResultViewController, AWESearchTabGuideResponse, AWEEcomSearchTabGuideTrackManager, AWESlidingTabbarView, AWEEcomSearchTabGuideStorageManager, AWEEcomSearchTabManager;

@interface AWEEcomSearchTabGuideManager : NSObject

@property (weak, nonatomic) AWESlidingTabbarView *slidingTabbarView;
@property (weak, nonatomic) AWEEcomSearchTabManager *tabManager;
@property (weak, nonatomic) AWEEcomSearchBaseResultViewController *searchResultViewController;
@property (retain, nonatomic) AWESearchTabGuideResponse *tabGuideResponse;
@property (retain, nonatomic) AWEEcomSearchTabGuideStorageManager *storageManager;
@property (retain, nonatomic) AWEEcomSearchTabGuideTrackManager *trackManager;

+ (BOOL)isECSearchTabGuideEnable;
+ (BOOL)isTabButtonVisible:(id)a0;

- (void)tabSelectWithIndex:(long long)a0 currentTabType:(unsigned long long)a1;
- (id)initWithSlidingTabbarView:(id)a0 tabManager:(id)a1 searchResultViewController:(id)a2;
- (void)updateTabGuideTrackParams:(id)a0;
- (void)updateWithTabGuide:(id)a0;
- (void)tabGuideShow:(id)a0;
- (id)guideWithIndex:(long long)a0;
- (void)tabGuidInfoUpdate:(id)a0;
- (BOOL)checkDemotionWithTabGuide:(id)a0;
- (BOOL)checkFrequencyWithGuide:(id)a0;
- (void)tabGuideClick:(id)a0 currentTabType:(unsigned long long)a1;
- (id)guideWithTabType:(id)a0;
- (void).cxx_destruct;

@end
