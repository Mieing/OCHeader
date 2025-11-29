@class NSString, MMCommonPickerView, UIView, NSNumber;
@protocol MMLivePausePickerViewDelegate;

@interface MMLivePausePickerView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate, MMCommonPickerDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMCommonPickerView *pickerView;
@property (retain, nonatomic) UIView *pickerViewCustomizedIndicatorTopLine;
@property (retain, nonatomic) UIView *pickerViewCustomizedIndicatorBottomLine;
@property (retain, nonatomic) NSNumber *selectedDuration;
@property (weak, nonatomic) id<MMLivePausePickerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)titleForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (id)colorForPageSheetCancelButton;
- (id)colorForPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (void)onPickerViewDidSelectRow:(long long)a0 inComponent:(long long)a1 PickItem:(id)a2;
- (void).cxx_destruct;

@end
