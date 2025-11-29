@class MMUIButton, NSArray, UIPickerView, NSString, MMFinderLivePickerViewConfig, UIView, MMUILabel;
@protocol MMFinderLivePickerViewDelegate;

@interface MMFinderLivePickerView : UIView <UIPickerViewDelegate, UIPickerViewDataSource>

@property (retain, nonatomic) MMFinderLivePickerViewConfig *config;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) NSArray *rows;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUIButton *cancelButton;
@property (retain, nonatomic) MMUIButton *confirmButton;
@property (retain, nonatomic) UIPickerView *pickerView;
@property (nonatomic) long long selectedRow;
@property (nonatomic) BOOL isDismissed;
@property (retain, nonatomic) UIView *lineView;
@property (weak, nonatomic) id<MMFinderLivePickerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTitleRows:(id)a0 config:(id)a1;
- (void)showInView:(id)a0 animated:(BOOL)a1;
- (void)dismissAnimated:(BOOL)a0;
- (void)selectRow:(unsigned long long)a0;
- (void)selectRowWithTitle:(id)a0;
- (void)layoutSubviews;
- (void)onBGTap:(id)a0;
- (void)onCancel;
- (void)onConfirm;
- (void)initUI;
- (id)genNavButton;
- (id)getBGColor;
- (id)getContentBGColor;
- (id)getTitleColor;
- (id)getCancelColor;
- (id)getConfirmColor;
- (id)getCancelTitle;
- (id)getConfirmTitle;
- (id)getComponentColor;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 attributedTitleForRow:(long long)a1 forComponent:(long long)a2;
- (double)pickerView:(id)a0 widthForComponent:(long long)a1;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (void).cxx_destruct;

@end
