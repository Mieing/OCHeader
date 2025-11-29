@class WCShareCardMemberHeaderCardImageView, NSString, WCCardLargeCodeView;
@protocol WCCardMemberCardContentDelegate;

@interface WCCardMemberCardDetailContentView : WCCardBaseCardDetailContentView <UITableViewDelegate, UITableViewDataSource, WCCardDetailContentLogicDelegate, WCShareCardMemberCustomImgHeaderDelegate, WCCardDetailPageCodeCellViewDelegate, ILinkEventExt, WCCardLargeCodeViewDelegate>

@property (weak, nonatomic) id<WCCardMemberCardContentDelegate> delegte;
@property (nonatomic) BOOL bIsShareCardMode;
@property (nonatomic) BOOL bIsAcceptMemberCard;
@property (retain, nonatomic) WCShareCardMemberHeaderCardImageView *memberCardImgView;
@property (retain, nonatomic) WCCardLargeCodeView *largeCodeView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initContentViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isShareCardMode:(BOOL)a1 withCardDataSource:(id)a2 withOneUsedStoreInfo:(id)a3 withServiceContact:(id)a4 withDelegate:(id)a5;
- (void)initContentView;
- (id)createTableViewHeaderView;
- (id)bottomAdvertiseTipsColor;
- (id)createTableViewFooterView;
- (id)makeMemberCardFooterBgViewWithCurFooterHeight:(double)a0;
- (void)reloadContentData;
- (void)onNearbyShopPhoneNumClick;
- (double)getTableViewCellSumHeight;
- (void)realOpenUrl:(id)a0;
- (void)realOpenTinyAppWithUsername:(id)a0 path:(id)a1;
- (void)onMemberCardViewApplyBtnClick;
- (void)onMemberCardAnnounceClicked:(id)a0;
- (void)onMemberCardSecondaryField:(id)a0;
- (void)onMemberCustomImgHeaderInfoBtnClicked;
- (void)onClickAcceptCardBtn:(id)a0;
- (void)onClickShareCardBtn;
- (void)onNeedOpenUrlStr:(id)a0;
- (BOOL)isItemFromOutAppScene;
- (void)onFollowBtnClick:(id)a0;
- (void)onGuidanceBtnClick:(id)a0;
- (void)onOperationBtnClick:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)makeCodeCell:(id)a0;
- (void)makePayOrderCell:(id)a0;
- (double)calcPayOrderCellHeight;
- (double)calcOperationFieldCellHeight;
- (void)makeAcceptCardCell:(id)a0;
- (void)makeOperateCell:(id)a0;
- (void)makeUsedStoresCell:(id)a0;
- (void)makeGiftCardInfoCell:(id)a0;
- (void)onCodeViewFieldClick;
- (void)onReasonButtonClick;
- (void)refreshCode;
- (void)onPageCodeTapWithCardSource:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)realClosed;
- (void).cxx_destruct;

@end
