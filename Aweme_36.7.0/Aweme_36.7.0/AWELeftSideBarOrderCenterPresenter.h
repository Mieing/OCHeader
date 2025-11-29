@class NSString, AWELeftSideBarListCellDataModel, AWECodeGenV1OrderEntranceSidebarSubTitleResp, UIView;
@protocol AWELeftSideBarStencilViewProtocol;

@interface AWELeftSideBarOrderCenterPresenter : AWELeftSideBarBasePresenter

@property (retain, nonatomic) UIView<AWELeftSideBarStencilViewProtocol> *listView;
@property (retain, nonatomic) AWELeftSideBarListCellDataModel *cellDataModel;
@property (nonatomic) BOOL canTrackGuide;
@property (nonatomic) long long subTitleRequestState;
@property (retain, nonatomic) AWECodeGenV1OrderEntranceSidebarSubTitleResp *subTitleRespModel;
@property (nonatomic) BOOL hasCreatedCell;
@property (copy, nonatomic) NSString *subTitleID;

- (id)initWithContext:(id)a0 extraData:(id)a1;
- (void)leftSideBarPresenterOnReloadWithContext:(id)a0 extraData:(id)a1;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (double)cellViewWidth;
- (id)bussinessTrackInfo;
- (void)leftSideBarThemeDidChange:(long long)a0;
- (void)leftSideBarCellClick;
- (void)onLeftSideBarOpen;
- (void)onLeftSideBarClose;
- (void)leftSideBarViewWillAppear;
- (void)leftSideBarPresenterOnCreate;
- (id)leftSideBarListCellDataModel:(id)a0;
- (BOOL)enableSubTitle;
- (void)recordSubTitleActionIfNeeded:(long long)a0;
- (BOOL)hasShownSubTitle;
- (id)schemaPopoverText;
- (void)trackOrderCenter:(BOOL)a0;
- (BOOL)canShowPopover;
- (id)popoverText;
- (void)fetchSubTitle;
- (void)updateSubTitle:(id)a0;
- (void).cxx_destruct;

@end
