@class BDEnvPlatformConfigModel, NSString, UITextField, BDEnvPlatformTriangleView, UILabel, UIPickerView, BDEnvGeckoConfigModel;

@interface BDEnvPlatformGeckoAKCell : UITableViewCell <UIPickerViewDelegate, UIPickerViewDataSource, UITextFieldDelegate>

@property (retain, nonatomic) UIPickerView *pickerView;
@property (retain, nonatomic) BDEnvGeckoConfigModel *configModel;
@property (retain, nonatomic) BDEnvPlatformTriangleView *triangleView;
@property (retain, nonatomic) UILabel *geckoAKLabel;
@property (retain, nonatomic) BDEnvPlatformConfigModel *envConfigModel;
@property (retain, nonatomic) UITextField *geckoAKTextField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateGeckoConfigModel:(id)a0;
- (void)reloadCellData;
- (void)updateEnvConfigModel:(id)a0;
- (id)initWithConfigModel:(id)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)textFieldShouldReturn:(id)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)layoutView;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (void)setupView;

@end
