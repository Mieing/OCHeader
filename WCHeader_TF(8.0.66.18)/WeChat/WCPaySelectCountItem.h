@class NSString, WCPayNavigationView, UILabel, UIPickerView, UIButton;

@interface WCPaySelectCountItem : WCBaseTextFieldItem <UIPickerViewDataSource, UIPickerViewDelegate> {
    UIPickerView *m_pickerView;
    long long m_iStartCount;
    long long m_iEndCount;
    NSString *m_value;
}

@property long long m_count;
@property (retain) UILabel *label;
@property (retain) WCPayNavigationView *backgroundView;
@property (retain) WCPayNavigationView *contentView;
@property (retain) UIButton *cancelButton;
@property (retain) UIButton *confirmButton;
@property (retain) UILabel *pickerTitleView;
@property (retain) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTitle:(id)a0 tip:(id)a1 key:(id)a2;
- (id)getValue;
- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateView;
- (void)onTapLabel;
- (void)updateLabel;
- (void)updateBackgroudView;
- (void)onTapBackgroundView;
- (void)updateContentView;
- (void)updateCancelButton;
- (void)updatePickerTitleView;
- (void)updateConfirmButton;
- (void)onClickCancel;
- (void)onClickConfirm;
- (void)updatePickerView;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 widthForComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (void)UIPickerViewDidCancel;
- (void)UIPickerViewDidFinish;
- (void)setStartCount:(long long)a0 endCount:(long long)a1;
- (void)setDefaultCount:(long long)a0;
- (long long)getCount;
- (void).cxx_destruct;

@end
