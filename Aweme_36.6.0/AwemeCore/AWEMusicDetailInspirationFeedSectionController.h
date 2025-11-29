@class NSString, UIViewController;

@interface AWEMusicDetailInspirationFeedSectionController : AWEBaseFeedSectionController <AWEAwemeDetailTableViewControllerDelegate>

@property (nonatomic) long long numberOfCellPerRow;
@property (nonatomic) struct CGSize { double width; double height; } cellSize;
@property (nonatomic) struct CGSize { double width; double height; } lastCellSize;
@property (nonatomic) BOOL ifFirstCellLoadHasTracked;
@property (nonatomic) BOOL ifFirstCoverLoadHasTracked;
@property (retain, nonatomic) UIViewController *hostVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (void)detailTableViewController:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2 model:(id)a3;
- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (void)viewControllerDidAppear:(BOOL)a0;
- (id)aAWEPadModuleAdapter;
- (void)didSelectItemAtIndex:(long long)a0 model:(id)a1;
- (void)setupNotification;
- (void)schemaDataVerifyWithSchema:(id)a0;
- (void)preloadShootResourceIfNeed:(id)a0;
- (void)musicCollectedStatusChanged:(id)a0;
- (id)logExtraDictForFeedWhenClickMusicAwemeList;
- (void)trackFirstCellLoadIfNeeded;
- (void)trackFirstCoverLoadIfNeeded;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)init;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;

@end
