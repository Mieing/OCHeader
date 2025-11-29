@class IESLiveActionSheetPresentViewController, IESLivePickerContentView, IESLiveAnnouncementExpireTimeSource, NSString;

@interface IESLiveAnnouncementExpireTimeSettingView : UIView <IESLivePickerSheetViewDelegate>

@property (retain, nonatomic) IESLivePickerContentView *datePicker;
@property (retain, nonatomic) IESLiveAnnouncementExpireTimeSource *datePickerSource;
@property (retain, nonatomic) IESLiveActionSheetPresentViewController *presenter;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 selectedDate:(id)a1 startDate:(id)a2 endData:(id)a3;
- (void)onQuestionButtonClicked;
- (void)didSelectedRow:(long long)a0 inComponent:(long long)a1;
- (void)onConfirmButtonClick;
- (id)getSelectedDate;
- (void)dismiss;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupSubviews;

@end
