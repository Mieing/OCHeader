@class UIView, NSString, UIPickerView, NSArray, UIImageView, UIButton, BDPAddressModel, UITextField, UITextView, UILabel;
@protocol AWEAddressDelegate;

@interface AWEPluginAddressAddViewController : UIViewController <UITextFieldDelegate, UITextViewDelegate, UIPickerViewDelegate, UIPickerViewDataSource> {
    UILabel *_nameLabel;
    UILabel *_telLabel;
    UILabel *_areaLabel;
    UILabel *_areaDetailLabel;
    UILabel *_addressLabel;
    UIButton *_saveButton;
    UITextField *_nameTextField;
    UIImageView *_nameClearImagevu;
    UILabel *_namePlaceHolderLabel;
    UITextField *_telTextField;
    UIImageView *_telClearImagevu;
    UILabel *_telPlaceHolderLabel;
    UITextView *_addressTextView;
    UIImageView *_addressClearImagevu;
    UIPickerView *_areaPickerView;
    NSArray *_areaArray;
    long long _pickerSelect1;
    long long _pickerSelect2;
    long long _pickerSelect3;
    BOOL _areaDidChanged;
}

@property (retain, nonatomic) UIView *pickerContainerView;
@property (retain, nonatomic) UIView *pickerBackgroundView;
@property (retain, nonatomic) UIView *container;
@property (nonatomic) BOOL hasAdded;
@property (retain, nonatomic) BDPAddressModel *addressModel;
@property (nonatomic) unsigned long long enterType;
@property (weak, nonatomic) id<AWEAddressDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)backgroundClick;
- (void)textFieldTextChange:(id)a0;
- (void)setupAreaArrayData;
- (void)initUIComponent;
- (void)initUIData;
- (void)clearBtnClick:(id)a0;
- (void)showAreaPicker;
- (void)saveDidClick;
- (void)resetSaveButtonState;
- (void)fillDataForModel:(id)a0;
- (BOOL)checkIfInputValid;
- (void)areaPickerCancelClick:(id)a0;
- (void)areaPickerconfirmClick:(id)a0;
- (void)dismissAreaPicker;
- (void)dismissAreaPickerWithCompletion:(id /* block */)a0;
- (void)setAreaWithProvince:(id)a0 city:(id)a1 area:(id)a2;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)init;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)shouldAutorotate;
- (void)add;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (void)textViewDidBeginEditing:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)edit;

@end
