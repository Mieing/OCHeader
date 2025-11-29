@class UILabel, UIDatePicker, NSString;

@interface WXGRoamChooseRangeTimeDetailView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) UIDatePicker *datePicker;
@property (retain, nonatomic) UILabel *dateLabel;
@property (retain, nonatomic) UILabel *dateTipsLabel;
@property (nonatomic) BOOL isStartTime;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIsStartTime:(BOOL)a0;
- (void)setupView;
- (void)datePickerValueChanged:(id)a0;
- (void)updateDate;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (void).cxx_destruct;

@end
