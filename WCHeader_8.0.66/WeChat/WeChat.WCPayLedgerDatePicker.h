@interface WeChat.WCPayLedgerDatePicker : NSObject <MMPageSheetAdapterDelegate, MMPageSheetBottomViewDelegate> {
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ adapter;
    void /* unknown type, empty encoding */ pickAction;
    void /* unknown type, empty encoding */ modalDisappearAction;
    void /* unknown type, empty encoding */ contentInitialized;
}

- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (void)pageSheetWillAppear:(id)a0;
- (void)pageSheetDidAppear:(id)a0;
- (void)pageSheetWillDisappear:(id)a0;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)init;
- (void).cxx_destruct;

@end
