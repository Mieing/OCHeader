@class UITapGestureRecognizer, MMCommonActionSheetPicker, NSString, MMFinderLiveTaskId, UIView, MMFinderLivePaymentTrialTimeSettingCell, MMUILabel;

@interface MMFinderLivePaymentTrialTimeSettingView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate, MMCommonActionSheetPickerDelegate>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) MMFinderLivePaymentTrialTimeSettingCell *durationSettingCell;
@property (nonatomic) long long purchaseLivePreviewType;
@property (nonatomic) unsigned int curTrialTimeHour;
@property (nonatomic) unsigned int curTrialTimeMinute;
@property (retain, nonatomic) MMCommonActionSheetPicker *startTimePicker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLiveTaskId:(id)a0 purchaseLivePreviewType:(long long)a1 trialDurationTime:(unsigned int)a2;
- (void)initViews;
- (void)layoutSubviews;
- (void)layoutUI;
- (double)contentViewHeight;
- (void)onSelectTrialTime;
- (id)getDatePickerData;
- (id)getHourDataWithDayComponent:(long long)a0;
- (id)getMinuteDataWithDayComponent:(long long)a0 hourComponent:(long long)a1;
- (id)getMinuteArrWithDayComponent:(long long)a0 hourComponent:(long long)a1;
- (id)getHourArrWithDayComponent:(long long)a0;
- (void)dismissStartTimePicker;
- (void)commonPickerConfirm:(id)a0 selectedRows:(id)a1;
- (void)commonActionSheetPicker:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2 pickItem:(id)a3;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (double)bottomViewBottomMargin;
- (id)liveTask;
- (void).cxx_destruct;

@end
