@interface AWEPaySwiftImpl.TripLeftSideBarPresenter : AWELeftSideBarBasePresenter <AWELeftSideBarDowngradeDisplayProtocol> {
    void /* unknown type, empty encoding */ listView;
    void /* unknown type, empty encoding */ cellDataModel;
    void /* unknown type, empty encoding */ isCellPresenting;
    void /* unknown type, empty encoding */ reqSubTitleInfo;
    void /* unknown type, empty encoding */ subTitleState;
    void /* unknown type, empty encoding */ reportedReqSubtitleShow;
    void /* unknown type, empty encoding */ shouldOpenPreRenderSchema;
}

- (BOOL)canDowngradeDisplay;
- (void)downgradeDisplay;
- (id)initWithContext:(id)a0 extraData:(id)a1;
- (void)leftSideBarPresenterOnReloadWithContext:(id)a0 extraData:(id)a1;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (double)cellViewWidth;
- (id)bussinessTrackInfo;
- (void)leftSideBarThemeDidChange:(long long)a0;
- (void)leftSideBarCellClick;
- (void)onLeftSideBarWillOpen;
- (void)onLeftSideBarOpen;
- (void)onLeftSideBarClose;
- (void)leftSideBarViewDidAppear;
- (void)leftSideBarViewDidDisAppear;
- (BOOL)needUpdateLeftSideBarContextWithModuleType:(id)a0 withExtraData:(id)a1 withAmbienceIdentification:(id)a2;
- (void)updateLeftSideBarContext:(id)a0 withExtraData:(id)a1 withAmbienceIdentification:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
