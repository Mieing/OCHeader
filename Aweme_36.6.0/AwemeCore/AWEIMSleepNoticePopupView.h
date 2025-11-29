@class NSString, UIImageView, UILabel, UIPickerView;

@interface AWEIMSleepNoticePopupView : AWEIMBasePopupView <UIPickerViewDelegate>

@property (retain, nonatomic) UIImageView *avatarImgView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIPickerView *datePicker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isShowing;

- (void)showTitle:(id)a0 subTitle:(id)a1 setting:(id)a2;
- (id)contentAttributedStringWithString:(id)a0;
- (void)p_setupUITitle:(id)a0 subTitle:(id)a1 setting:(id)a2;
- (void)p_trackSleepNoticeSettingShow;
- (void)confirmOpenSleepNotice;
- (id)getSleepTimeTextWithIndex:(unsigned long long)a0;
- (long long)getSleepTimeWithIndex:(unsigned long long)a0;
- (void)p_trackSleepNoticeSettingConfirm:(long long)a0;
- (void).cxx_destruct;
- (void)hide;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;

@end
