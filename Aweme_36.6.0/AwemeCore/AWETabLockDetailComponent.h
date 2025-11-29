@class NSString;

@interface AWETabLockDetailComponent : AWEUserDetailBaseComponent <AWETabLockProtocol>

@property (nonatomic) long long collectsTotalStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateTrailingIconWithImage:(id)a0 index:(long long)a1;
- (void)updateTrailingIconWithoutAnimationWithImage:(id)a0 index:(long long)a1;
- (void)onDidSelectTabListIndex:(long long)a0 actionType:(unsigned long long)a1 hasRedDotWhenSwitched:(BOOL)a2 needTrack:(BOOL)a3;
- (void)addLocksToTabWithNoti:(id)a0;
- (void)addLocksToTab;
- (void)updateLikeLock;
- (BOOL)shouldShowFavoriteTabLock;
- (BOOL)shouldIgnoreInDynamicLock:(long long)a0;
- (BOOL)canShowLockIconWithIndex:(long long)a0;
- (id)init;
- (void)addObserver;
- (void)viewDidLoad;
- (void)onInit;

@end
