@class UIView, UIPickerView, UILabel, NSString, BDPUniqueID, UIButton, UIToolbar, BDPCustomPickerPluginModel, UIBarButtonItem;
@protocol BDPPickerViewDelegate;

@interface BDPPickerView : UIView <UIPickerViewDelegate, UIPickerViewDataSource, BDPAppInterfaceOrientationChangeMessage>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) UIView *background;
@property (retain, nonatomic) UIToolbar *toolbar;
@property (retain, nonatomic) UIPickerView *picker;
@property (nonatomic) long long type;
@property (retain, nonatomic) BDPCustomPickerPluginModel *model;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UIBarButtonItem *cancelButtonItem;
@property (retain, nonatomic) UIBarButtonItem *confirmButtonItem;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *separator;
@property (nonatomic) BOOL isShowing;
@property (weak, nonatomic) id<BDPPickerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissWithAnimated:(BOOL)a0;
- (id)selectedIndexs;
- (void)interfaceOrientationChange:(id)a0 targetOrientation:(long long)a1 uniqueID:(id)a2;
- (void)cancelButtonOnClick:(id)a0;
- (void)confirmButtonOnClick:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 uniqueID:(id)a1;
- (void)updateChildFrame;
- (double)componentWidthWithCount:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)showInView:(id)a0;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (void)setupViews;
- (void)updateWithModel:(id)a0;
- (void)panGesture:(id)a0;

@end
