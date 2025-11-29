@interface WeChat.WSNativeHotListContainerView : UIView <WSHotListTeachView, UIScrollViewDelegate, UITableViewDelegate, FTSWebSearchAdViewDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ vc;
    void /* unknown type, empty encoding */ settingVC;
    void /* unknown type, empty encoding */ hasAppear;
    void /* unknown type, empty encoding */ $__lazy_storage_$_session;
    void /* unknown type, empty encoding */ tableView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_settingButton;
    void /* unknown type, empty encoding */ listAdapter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataSource;
}

@property (nonatomic) void /* unknown type, empty encoding */ isVisable;

- (id)initWithVc:(id)a0 delegate:(id)a1;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)onNeedRefreshUI;
- (void)onNeedRefreshSettings;
- (void)applicationDidBecomeActive;
- (double)getTableViewContentHeight;
- (double)getHotListContentViewHeight;
- (void)onRaiseSettingHalfScreen;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)showDynamicViewAnimated:(BOOL)a0;
- (void)onViewAppear;
- (void)onPopOrDismissed;
- (void)onTapAdItem:(id)a0;
- (void)onTapHint:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
