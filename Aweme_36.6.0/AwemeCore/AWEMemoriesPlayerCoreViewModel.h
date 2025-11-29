@class NSIndexPath, NSString, AWEMemoriesPlayerPauseView, NSArray, AWEMemoriesPlayerListViewController, AWEMemoriesPlayerEmptyView, AWEMemoriesPlayerDataController, AWEMemoriesPlayerLoadingView, AWEMemoriesPlayerConfigManager;

@interface AWEMemoriesPlayerCoreViewModel : NSObject <AWEMemoriesPlayerCoreService>

@property (retain, nonatomic) AWEMemoriesPlayerLoadingView *loadingView;
@property (retain, nonatomic) AWEMemoriesPlayerEmptyView *emptyView;
@property (retain, nonatomic) AWEMemoriesPlayerPauseView *pauseView;
@property (retain, nonatomic) AWEMemoriesPlayerDataController *dataController;
@property (retain, nonatomic) AWEMemoriesPlayerConfigManager *configManager;
@property (weak, nonatomic) AWEMemoriesPlayerListViewController *playerListViewController;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) NSIndexPath *currentIndexPath;
@property (copy, nonatomic) NSArray *tileModelsArray;
@property (nonatomic) struct CGPoint { double x; double y; } playerContentOffSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissLoadingView;
- (void)showEmptyView;
- (void)dismissEmptyView;
- (void)pauseByManual:(BOOL)a0;
- (void)playByManual:(BOOL)a0;
- (void)scrollToIndex:(unsigned long long)a0 animation:(BOOL)a1;
- (void)setupPauseView;
- (void)hiddenAccessibility:(BOOL)a0;
- (void)dismissPauseView;
- (void)showPauseView;
- (void).cxx_destruct;
- (void)showLoadingView;

@end
