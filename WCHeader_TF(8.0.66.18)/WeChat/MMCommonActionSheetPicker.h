@class PickerTitleBar, NSString, MMCommonPickerView, NSArray, UIView, UIButton, PickerToolBar;
@protocol MMCommonActionSheetPickerDelegate;

@interface MMCommonActionSheetPicker : MMUIView <MMCommonPickerDelegate>

@property (retain, nonatomic) MMCommonPickerView *pickerView;
@property (retain, nonatomic) PickerTitleBar *titleBar;
@property (retain, nonatomic) PickerToolBar *pickerToolBar;
@property (weak, nonatomic) UIView *containerView;
@property (weak, nonatomic) UIView *transparentView;
@property (retain, nonatomic) MMCommonPickerView *customPickerView;
@property (nonatomic) BOOL showInView;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *confirmText;
@property (readonly, nonatomic) id selectedData;
@property (readonly, nonatomic) NSArray *selectedRows;
@property (weak, nonatomic) id<MMCommonActionSheetPickerDelegate> delegate;
@property (readonly, nonatomic) UIButton *confirmButton;
@property (readonly, nonatomic) UIButton *cancelButton;
@property (nonatomic) BOOL shouldManualDismiss;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })realSafeAreaInsets;

- (id)initWithCustomPickerView:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)init;
- (void)dealloc;
- (void)createViews;
- (void)addNotifications;
- (void)UISplitViewWillChangeSplitMode;
- (void)layoutSubviews;
- (void)setTopRoundCorner;
- (void)setData:(id)a0;
- (void)setData:(id)a0 inComponent:(long long)a1;
- (void)setSelected:(id)a0;
- (void)setSelected:(id)a0 inComponent:(long long)a1;
- (void)selectRow:(long long)a0 inComponent:(long long)a1 animated:(BOOL)a2;
- (void)showInView:(id)a0;
- (void)showInView:(id)a0 maskAlpha:(double)a1;
- (void)dismissActionSheetPicker;
- (void)dismiss;
- (void)centerTitle;
- (void)setBottomTips:(id)a0;
- (void)setBottomTips:(id)a0 autoExpandHeight:(BOOL)a1;
- (void)onCancel;
- (void)onConfirm;
- (void)handleTap:(id)a0;
- (id)getTransparentView;
- (id)getContainView;
- (double)pickerViewHeight;
- (void)onPickerViewDidSelectRow:(long long)a0 inComponent:(long long)a1 PickItem:(id)a2;
- (void).cxx_destruct;

@end
