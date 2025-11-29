@class UIColor, WCCardDetailContentViewLogicController, MMTableView, NSString, UIButton;

@interface WCCardBaseCardDetailContentView : MMUIView <ILinkEventExt>

@property (retain, nonatomic) UIButton *deeplinkBtn;
@property (retain, nonatomic) UIColor *cellColor;
@property (retain, nonatomic) WCCardDetailContentViewLogicController *logicController;
@property (retain, nonatomic) MMTableView *tableView;
@property (nonatomic) BOOL bIsSelectFollowContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initConentViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reloadContentData;
- (double)getCommonCellHeight;
- (double)getOneShopCellHeight;
- (void)onNearbyShopPhoneNumClick;
- (double)getTableViewCellSumHeight;
- (id)getCommonCellBkgColor;
- (id)bottomAdvertiseTipsColor;
- (void)realOpenUrl:(id)a0;
- (void)realOpenTinyAppWithUsername:(id)a0 path:(id)a1;
- (double)createFooterViewAcceptViewAndHeight:(id)a0 curCardTPInfo:(id)a1 viewControllerContentHeight:(double)a2;
- (double)createFooterViewWithGuidanceData:(id)a0 curCardTPInfo:(id)a1 viewControllerContentHeight:(double)a2;
- (void)onLinkClicked:(id)a0 backupUrl:(id)a1 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 extraInfo:(id)a3;
- (double)createFooterViewDeeplinksAndHeight:(id)a0 viewControllerContentHeight:(double)a1;
- (id)getFooterViewDeepLinksLabelColor;
- (void)JumoToDeepLink;
- (void)updateCardContentWithCardDataSource:(id)a0 isShareCardMode:(BOOL)a1 withOneUsedStoreInfo:(id)a2 withServiceContact:(id)a3 withCardStatus:(int)a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getShareCardEnterListBtnRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getHeaderViewApplyBtnFrame;
- (void)setMainText:(id)a0 subText:(id)a1;
- (BOOL)shouldUseDynamicColor;
- (double)calcOperationFieldCellHeight;
- (double)calcDetailViewCellHeight;
- (double)calcUsedConditionCellHeight;
- (double)calcNearbyShopCellHeight;
- (void)makeOperateCell:(id)a0;
- (void)makeUseConditionCell:(id)a0;
- (void)makeDetailViewCell:(id)a0;
- (void)makeOneShopCell:(id)a0;
- (void)makeUsedStoresCell:(id)a0;
- (void)makeViewBrandCell:(id)a0;
- (void)makeCellList0Cell:(id)a0 withIndexPath:(id)a1;
- (void)makeGiftToFriendCell:(id)a0;
- (void)makeGeneralCell:(id)a0 title:(id)a1 subTitle:(id)a2 hasHandle:(BOOL)a3 ShowFlag:(unsigned int)a4;
- (void)makeIconGeneralCell:(id)a0 iconUrl:(id)a1 title:(id)a2 subTitle:(id)a3 hasHandle:(BOOL)a4 ShowFlag:(unsigned int)a5;
- (void)makeCellBottomLineWithRowType:(id)a0 withIndexPath:(id)a1 withCell:(id)a2 withCellContentHeight:(double)a3;
- (void)onPhoneBtnPress:(id)a0;
- (void)serviceFollowBtnPress:(id)a0;
- (void).cxx_destruct;

@end
