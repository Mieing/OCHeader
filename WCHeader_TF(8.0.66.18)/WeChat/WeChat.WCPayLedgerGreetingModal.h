@interface WeChat.WCPayLedgerGreetingModal : NSObject <MMPageSheetAdapterDelegate, MMPageSheetBottomViewDelegate> {
    void /* unknown type, empty encoding */ adapter;
}

- (id)titleForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (void)pageSheetDidClose:(id)a0 closeType:(long long)a1;
- (void)onClickPageSheetConfirmButton;
- (id)init;
- (void).cxx_destruct;

@end
