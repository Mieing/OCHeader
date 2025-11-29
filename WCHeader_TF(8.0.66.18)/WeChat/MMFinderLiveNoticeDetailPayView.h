@class MMFinderLivePrepayTiersPanelViewModel, NSString, FinderLiveNoticeInfo;

@interface MMFinderLiveNoticeDetailPayView : MMFinderLiveGenericPayConfirmSheetView <WCCoinBuyCoinLogicDelegate, MMFinderLivePaymentPolicyIntroViewDelegate>

@property (retain, nonatomic) FinderLiveNoticeInfo *noticeInfo;
@property (copy, nonatomic) id /* block */ actionButtonBlock;
@property (retain, nonatomic) MMFinderLivePrepayTiersPanelViewModel *tiersViewModel;
@property (nonatomic) BOOL isTicket;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithNoticeInfo:(id)a0 contentHeight:(double)a1;
- (void)updateModel:(id)a0;
- (void)updateNoticeView;
- (void)onClickActionButton;
- (void)onMMFinderLivePaymentPolicyIntroViewConfirmButtonClicked:(id)a0;
- (void)customInitActionButton:(id)a0;
- (void)customInitTipLabel:(id)a0;
- (void)customInitMoneyLabel:(id)a0;
- (void).cxx_destruct;

@end
