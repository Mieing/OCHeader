@class UIView, UIPickerView, BDPRegionPickerPluginModel, BDPRegionPickerDelegate, NSString, UIButton, UIToolbar, UIBarButtonItem, UILabel;
@protocol BDPRegionPickerViewDelegate;

@interface BDPRegionPickerView : UIView <BDPAppInterfaceOrientationChangeMessage>

@property (retain, nonatomic) UIView *background;
@property (retain, nonatomic) UIToolbar *toolbar;
@property (retain, nonatomic) UIPickerView *picker;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UIBarButtonItem *cancelButtonItem;
@property (retain, nonatomic) UIBarButtonItem *confirmButtonItem;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) BDPRegionPickerPluginModel *model;
@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) BDPRegionPickerDelegate *pickerDelegate;
@property (weak, nonatomic) id<BDPRegionPickerViewDelegate> delegate;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissWithAnimated:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 model:(id)a1;
- (void)configStyle;
- (void)setupBackground;
- (void)interfaceOrientationChange:(id)a0 targetOrientation:(long long)a1 uniqueID:(id)a2;
- (void)updateChildFrame;
- (void)setupPicker;
- (void)setupToolBar;
- (void)actionCancel:(id)a0;
- (void)actionConfirm:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupDataSource;
- (void)showInView:(id)a0;
- (void)setupSubviews;
- (void)updateWithModel:(id)a0;
- (void)panGesture:(id)a0;

@end
