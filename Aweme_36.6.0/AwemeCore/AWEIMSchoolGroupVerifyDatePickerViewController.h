@class UIStackView, UIView, NSString, UILabel, UIPickerView, UIButton;
@protocol IESIMCustomModalTransitionContext;

@interface AWEIMSchoolGroupVerifyDatePickerViewController : UIViewController <UIPickerViewDelegate, UIPickerViewDataSource, IESIMCustomModalTransitionVCProtocol>

@property (readonly, nonatomic) UIPickerView *datePicker;
@property (readonly, nonatomic) UIStackView *titleRegion;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UIButton *cancelButton;
@property (readonly, nonatomic) UIButton *confirmButton;
@property (readonly, nonatomic) UIView *separateLineView;
@property (readonly, nonatomic) long long defaultSelectedYear;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) long long minYear;
@property (nonatomic) long long maxYear;
@property (weak, nonatomic) id<IESIMCustomModalTransitionContext> transitionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewControllerDidDismissByAction:(long long)a0;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__handleConfirmButtonClicked:(id)a0;
- (long long)__yearFromDate:(id)a0;
- (void)__createDatePickerRegion;
- (void)__createTitleRegion;
- (void)__handleCancelButtonClick:(id)a0;
- (void)__scrollToYear:(long long)a0 animated:(BOOL)a1;
- (id)initWithDefaultYear:(long long)a0 completionBlock:(id /* block */)a1;
- (void)__triggerCompletionBlock:(id)a0 isCancel:(BOOL)a1;
- (void).cxx_destruct;
- (void)viewSafeAreaInsetsDidChange;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (double)customCornerRadius;

@end
