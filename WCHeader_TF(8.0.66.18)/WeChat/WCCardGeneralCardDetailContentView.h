@class WCCardChoosePeopleLabelView, NSString, MMUIView, WCShareCardGeneralHeaderView, WCShareCardGeneralReceiveHeaderView;
@protocol WCCardGeneralCardContentDelegate;

@interface WCCardGeneralCardDetailContentView : WCCardBaseCardDetailContentView <UITableViewDelegate, UITableViewDataSource, WCShareCardGeneralReceiveHeaderDelegate, WCCardDetailContentLogicDelegate, WCShareCardGeneralCardHeaderDelegate, WCCardSecondaryViewDelegate, WCShareCardGeneralCardHeaderV2Delegate, ILinkEventExt>

@property (weak, nonatomic) id<WCCardGeneralCardContentDelegate> delegte;
@property (nonatomic) BOOL bIsShareCardMode;
@property (retain, nonatomic) WCShareCardGeneralHeaderView *generalCardHeaderView;
@property (retain, nonatomic) WCShareCardGeneralReceiveHeaderView *generalReceiverHeaderView;
@property (retain, nonatomic) MMUIView *separateStrokeView;
@property (retain, nonatomic) WCCardChoosePeopleLabelView *chooseView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initContentViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isShareCardMode:(BOOL)a1 withCardDataSource:(id)a2 withOneUsedStoreInfo:(id)a3 withServiceContact:(id)a4 withDelegate:(id)a5;
- (void)initContentView;
- (id)createTableViewHeaderView;
- (id)createTableViewFooterView;
- (void)setMainText:(id)a0 subText:(id)a1;
- (double)getTableViewCellSumHeight;
- (void)onShareCardImgBtnClick:(id)a0;
- (void)onShareCardJumpToFinderBtnClick:(id)a0;
- (void)reloadContentData;
- (void)onNearbyShopPhoneNumClick;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getHeaderViewApplyBtnFrame;
- (void)clickWhoCanSeeBtn:(id)a0;
- (void)realOpenUrl:(id)a0;
- (void)realOpenTinyAppWithUsername:(id)a0 path:(id)a1;
- (void)onGeneralCardViewApplyBtnClick;
- (void)onGeneralCardViewOperateBtnClick;
- (void)onClickAcceptCardBtn:(id)a0;
- (void)onClickShareCardBtn;
- (void)onNeedOpenUrlStr:(id)a0;
- (BOOL)isItemFromOutAppScene;
- (void)onWCCardSecondaryField:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
