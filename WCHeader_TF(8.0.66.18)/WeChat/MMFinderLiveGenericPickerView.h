@class FixTitleColorButton, MMFinderLiveGenericPickerViewConfig, NSString, UILabel, UIView, UIPickerView;
@protocol MMFinderLiveGenericPickerViewDelegate;

@interface MMFinderLiveGenericPickerView : UIView <UIPickerViewDelegate, UIPickerViewDataSource>

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIView *pickerContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) FixTitleColorButton *cancelButton;
@property (retain, nonatomic) FixTitleColorButton *confirmButton;
@property (retain, nonatomic) UIPickerView *pickerView;
@property (retain, nonatomic) MMFinderLiveGenericPickerViewConfig *config;
@property (nonatomic) long long selectedRow;
@property (weak, nonatomic) id<MMFinderLiveGenericPickerViewDelegate> delegate;
@property (retain, nonatomic) id userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfig:(id)a0;
- (void)initUI;
- (void)layoutSubviews;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (double)pickerView:(id)a0 widthForComponent:(long long)a1;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (void)showInView:(id)a0 animated:(BOOL)a1;
- (void)dismissAnimated:(BOOL)a0;
- (void)onBGTap:(id)a0;
- (void)onCancelButtonClick;
- (void)onConfirmButtonClick;
- (void).cxx_destruct;

@end
