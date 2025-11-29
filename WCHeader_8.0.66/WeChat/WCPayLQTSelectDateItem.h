@class NSString, MMUIViewController, WCPayNavigationView, UILabel, WCPayLQTPickerView;
@protocol WCPayLQTSelectDateItemDelegate;

@interface WCPayLQTSelectDateItem : WCBaseTextFieldItem <WCPayLQTPickerViewDelegate>

@property (retain) WCPayNavigationView *navigationView;
@property (retain) WCPayLQTPickerView *picker;
@property (retain) UILabel *label;
@property (weak) MMUIViewController *currentVc;
@property (weak) id<WCPayLQTSelectDateItemDelegate> pickerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTitle:(id)a0 tip:(id)a1 key:(id)a2;
- (id)getValue;
- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateView;
- (void)onTapLabel;
- (void)UIPickerViewDidCancel;
- (void)UIPickerViewDidFinish;
- (void)setStartDate:(long long)a0 endDate:(long long)a1 nowDate:(long long)a2;
- (void)becomeFirstResponder;
- (void)hide;
- (void)onSpaceTap;
- (void)onWCPayLQTPickerViewCancel;
- (void)onWCPayLQTPickerViewConfirm:(long long)a0;
- (double)onWCPayLQTPickerViewSafeBottom;
- (void)setCurrentViewController:(id)a0;
- (void).cxx_destruct;

@end
