@class WecoinSubscriptionAgreementHalfPage, NSString, WCCoinSubscriptionAgreementDetailView;

@interface WCCoinSubscriptionAgreementView : MMPageSheetBaseViewController <MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) WCCoinSubscriptionAgreementDetailView *panelDetailView;
@property (retain, nonatomic) WecoinSubscriptionAgreementHalfPage *pageData;
@property (copy, nonatomic) id /* block */ clickConfirmCallback;
@property (copy, nonatomic) id /* block */ clickCancelCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)pageSheetDidClose:(BOOL)a0;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (double)bottomViewTopMargin;
- (id)titleForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (void).cxx_destruct;

@end
