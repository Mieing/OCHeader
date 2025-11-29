@class NSString, MMUIViewController, ContentDateInfo, UIView, WCScheduleItem, MMActionSheetDatePicker;
@protocol WCScheduleLogicControllerDelegate;

@interface WCScheduleLogicController : MMObject <MMActionSheetDatePickerDelegate, WCScheduleMgrExt>

@property (retain, nonatomic) WCScheduleItem *cachedItem;
@property (nonatomic) BOOL isCancelSchedule;
@property (weak, nonatomic) MMUIViewController *fromVC;
@property (weak, nonatomic) UIView *animateCellView;
@property (weak, nonatomic) id<WCScheduleLogicControllerDelegate> delegate;
@property (retain, nonatomic) ContentDateInfo *contentDateInfo;
@property (nonatomic) unsigned int selectedRecommendInterval;
@property (retain, nonatomic) MMActionSheetDatePicker *datePicker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (BOOL)startAddScheduleLogicWithItem:(id)a0 cellView:(id)a1 fromViewController:(id)a2;
- (BOOL)startAddScheduleLogicWithItem:(id)a0 selectedDate:(id)a1;
- (void)startModifyRemindLogic:(id)a0 showDatePickerInView:(id)a1;
- (void)startCancelScheduleLogic:(id)a0 fromViewController:(id)a1;
- (void)startCancelScheduleItem:(id)a0 fromViewController:(id)a1;
- (void)dismissDatePickerView;
- (void)removeDatePicker;
- (void)datePickerExpose;
- (void)datePickerCancel:(id)a0;
- (void)datePickerConfirm:(id)a0;
- (BOOL)datePicker:(id)a0 shouldSelectDate:(id)a1;
- (void)onScheduleAppendItem:(id)a0;
- (void)onScheduleItemRemindChange:(id)a0;
- (void)onScheduleRemoveItem:(id)a0;
- (void)onScheduleModifyFail:(id)a0 errTips:(id)a1;
- (void).cxx_destruct;

@end
