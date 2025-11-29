@class DUXToast;

@interface AWERecycledWorksDetailViewController : AWEAwemeNewDetailBaseController

@property (retain, nonatomic) DUXToast *actionToast;

- (void)updateBottomBarWithAweme:(id)a0 updateTiming:(long long)a1;
- (void)showToastWithText:(id)a0;
- (id /* block */)createRecycledWorksDetailBottomBarContextBlock;
- (void)deleteCurrentRecycledWork;
- (void)trackEventName:(id)a0 aweme:(id)a1;
- (void)recoverCurrentRecycledWork;
- (void).cxx_destruct;

@end
