@class AWEIMFlexPresenter, NSString;

@interface AWEIMFlexComponent : AWEIMComponentBase <AWEIMFlexComponentEvent> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) AWEIMFlexPresenter *presenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)reloadCurrentPresenter;
- (void)reloadCell;
- (void)onCellPrepareReuseForCurrentViewModel;
- (void)presenter:(id)a0 didUpdateWithView:(id)a1;
- (void)reloadCellWithAnimation:(long long)a0;
- (void)__updateCurrentPresenterInReload:(id)a0;
- (void)reCalculateLayoutForce:(BOOL)a0;
- (void)reloadCellWithConfig:(id)a0;
- (void)reloadCellWithAnimation:(long long)a0 config:(id)a1;
- (void)reloadCellWithAnimator:(id)a0 config:(id)a1;
- (void)p_reloadCellWithAnimator:(id)a0 config:(id)a1;
- (void)reCalculateLayout;
- (void)p_lockPresenter;
- (void)p_unlockPresenter;
- (void)p_findContainers:(id)a0;
- (void)presenter:(id)a0 didCreateView:(id)a1;
- (void)reloadCellWithAnimator:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
