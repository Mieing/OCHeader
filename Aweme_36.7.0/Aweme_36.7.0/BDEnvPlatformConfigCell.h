@class BDEnvPlatformConfigModel, NSString, UITextField, BDEnvPlatformTriangleView, UIPickerView, UITapGestureRecognizer;
@protocol BDEnvPlatformConfigCellDelegate;

@interface BDEnvPlatformConfigCell : UITableViewCell <UIPickerViewDelegate, UIPickerViewDataSource, UITextFieldDelegate>

@property (retain, nonatomic) UIPickerView *pickerView;
@property (retain, nonatomic) BDEnvPlatformTriangleView *triangleView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UITextField *emptyTextField;
@property (retain, nonatomic) UITextField *envTextField;
@property (retain, nonatomic) UITextField *swimlaneTextField;
@property (retain, nonatomic) BDEnvPlatformConfigModel *configModel;
@property (weak, nonatomic) id<BDEnvPlatformConfigCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tapTriangleView;
- (void)reloadCellData;
- (void)updateEnvConfigModel:(id)a0;
- (id)initWithConfigModel:(id)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)textFieldShouldReturn:(id)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)awakeFromNib;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)layoutView;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (void)setupView;

@end
