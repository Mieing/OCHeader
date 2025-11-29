@class AWEHPProfileSideBarManagerContext, NSMutableArray;

@interface AWEHPProfileSideBarControllerManager : AWEHPListKitControllerManager

@property (retain, nonatomic) NSMutableArray *trackShowModels;
@property (retain, nonatomic) NSMutableArray *tempTrackShowModels;
@property (nonatomic) long long status;
@property (weak, nonatomic) id transitionContextProvider;
@property (retain, nonatomic) AWEHPProfileSideBarManagerContext *context;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) long long pageRank;

- (void)hpListKitViewWillAppear;
- (void)hpListKitViewDidAppear;
- (void)hpListKitViewWillDisappear;
- (void)hpListKitViewDidDisappear;
- (void)sideBarEntranceViewOnShow;
- (void)sideBarEntranceViewOnHide;
- (void)p_tryTrackTempShowModel;
- (void)hpListKitViewThemeChange:(long long)a0;
- (void)p_tryTrackSideBarCellViewShow:(id)a0;
- (void)p_trackSideBarCellViewShow:(id)a0;
- (double)calculateSideBarAllListCellHeight;
- (void)onHPProfileSideBarWillOpen;
- (void)onHPProfileSideBarDidOpen;
- (void)onHPProfileSideBarWillClose;
- (void)onHPProfileSideBarDidClose;
- (id)onCreateSideBarViewWithModel:(id)a0;
- (void)onClickSideBarViewWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFactory:(id)a0;

@end
