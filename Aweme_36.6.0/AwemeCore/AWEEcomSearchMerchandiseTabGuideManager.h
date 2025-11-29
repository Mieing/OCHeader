@class AWEEcomSearchBaseResultViewController, AWEEcomSearchMerchandiseTabGuideStorageManager, AWESearchMerchandiseTabGuideResponse, AWEEcomSearchTabManager, AWEEcomSearchMerchandiseTabGuideTrackManager;

@interface AWEEcomSearchMerchandiseTabGuideManager : NSObject

@property (weak, nonatomic) AWEEcomSearchTabManager *tabManager;
@property (weak, nonatomic) AWEEcomSearchBaseResultViewController *searchResultViewController;
@property (retain, nonatomic) AWESearchMerchandiseTabGuideResponse *tabGuideResponse;
@property (retain, nonatomic) AWEEcomSearchMerchandiseTabGuideStorageManager *storageManager;
@property (retain, nonatomic) AWEEcomSearchMerchandiseTabGuideTrackManager *trackManager;

+ (BOOL)isECSearchMerchandiseTabGuideEnable;

- (void)componentCellDidSelectTabWithTabType:(id)a0;
- (id)initWithTabManager:(id)a0 searchResultViewController:(id)a1;
- (void)updateTabGuideTrackParams:(id)a0;
- (void)updateWithTabGuide:(id)a0;
- (BOOL)checkFrequencyWithGlobalExitRule:(id)a0;
- (BOOL)checkFrequencyWithTabExitRule:(id)a0 tabType:(id)a1;
- (void)tabGuideShow:(id)a0;
- (void)tabGuideClick:(id)a0;
- (void).cxx_destruct;

@end
