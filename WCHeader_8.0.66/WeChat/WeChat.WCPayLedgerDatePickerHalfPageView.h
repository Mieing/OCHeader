@interface WeChat.WCPayLedgerDatePickerHalfPageView : MMPageSheetBaseView <UIPickerViewDelegate, UIPickerViewDataSource, MMPageSheetBottomViewDelegate> {
    void /* unknown type, empty encoding */ pickerView;
    void /* unknown type, empty encoding */ startDate;
    void /* unknown type, empty encoding */ endDate;
    void /* unknown type, empty encoding */ confirmAction;
}

- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (id)pickerView:(id)a0 attributedTitleForRow:(long long)a1 forComponent:(long long)a2;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)sizeToFit;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void).cxx_destruct;

@end
