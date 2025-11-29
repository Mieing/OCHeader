@class UIImage, NSString;

@interface AWETabLockHomeComponent : AWEUserHomeBaseComponent <AWETabLockProtocol>

@property (nonatomic) BOOL isFirstTimeViewDidLoad;
@property (retain, nonatomic) UIImage *lockIconImage;
@property (nonatomic) long long collectsTotalStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onDidSelectTabListIndex:(long long)a0 actionType:(unsigned long long)a1 hasRedDotWhenSwitched:(BOOL)a2 needTrack:(BOOL)a3;
- (void)addLocksToTabWithNoti:(id)a0;
- (void)addLocksToTab;
- (void)updateLikeLock;
- (BOOL)shouldShowFavoriteTabLock;
- (BOOL)shouldIgnoreInDynamicLock:(long long)a0;
- (BOOL)canShowLockIconWithIndex:(long long)a0;
- (void)addLocksToTabWithIndex:(long long)a0;
- (BOOL)shouldShowEntertainmentTabLock;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear;
- (void)addObserver;
- (void)viewDidLoad;
- (void)onInit;

@end
