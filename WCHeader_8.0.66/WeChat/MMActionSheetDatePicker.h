@class UIBarButtonItem, NSString, NSDate, UIView, NSMutableArray, UIButton;
@protocol MMActionSheetCustomPickerPotocol, MMActionSheetDatePickerDelegate;

@interface MMActionSheetDatePicker : MMUIView <MMScheduleDatePickerViewDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UIView *datePicker;
@property (retain, nonatomic) UIView *pickerToolBar;
@property (retain, nonatomic) UIView *quickTimeButtonsView;
@property (retain, nonatomic) UIButton *datePreviewButton;
@property (retain, nonatomic) NSMutableArray *quickTimeButtons;
@property (retain, nonatomic) UIBarButtonItem *doneBarButtonItem;
@property (retain, nonatomic) UIBarButtonItem *titleBarButtonItem;
@property (retain, nonatomic) UIBarButtonItem *cancelBarButtonItem;
@property (weak, nonatomic) id<MMActionSheetDatePickerDelegate> delegate;
@property (retain, nonatomic) UIView<MMActionSheetCustomPickerPotocol> *customDatePickerView;
@property (nonatomic) unsigned long long datePickerViewType;
@property (nonatomic) long long datePickerMode;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSDate *minimumDate;
@property (retain, nonatomic) NSDate *maximumDate;
@property (retain, nonatomic) UIView *transparentView;
@property (retain, nonatomic) NSDate *selectedDate;
@property (retain, nonatomic) NSString *comfirmText;
@property (retain, nonatomic) NSString *cancelText;
@property (nonatomic) BOOL needSelectDefaultButton;
@property (nonatomic) long long selectedRecommendInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)showInView:(id)a0;
- (void)dismissActionSheetDatePicker;
- (void)dismiss;
- (BOOL)accessibilityPerformEscape;
- (void)onCancel;
- (void)onConfirm;
- (void)eventForDatePicker:(id)a0;
- (void)handleTap:(id)a0;
- (void)layoutContentView;
- (void)buttonTapped:(id)a0;
- (void)cancelButtonSelected;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (void)onDatePreviewButtonTapped;
- (void).cxx_destruct;

@end
