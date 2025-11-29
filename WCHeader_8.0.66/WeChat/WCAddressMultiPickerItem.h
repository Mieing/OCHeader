@class NSArray, NSString, WCAddressHalfScreenPickerView;

@interface WCAddressMultiPickerItem : WCBaseTextFieldItem {
    NSArray *m_arrStage;
    NSString *m_selectProvince;
    NSString *m_selectCity;
    NSString *m_selectDistrict;
    NSString *m_selectStreet;
    NSString *m_nationalCode;
    int m_component;
}

@property (retain, nonatomic) WCAddressHalfScreenPickerView *pickerView;

- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)becomeFirstResponder;
- (void)setScreenViewDelegate:(id)a0;
- (void)reloadAddress;
- (void)setSelectStageProvince:(id)a0 City:(id)a1 District:(id)a2;
- (void)setSelectStageProvince:(id)a0 City:(id)a1 District:(id)a2 Street:(id)a3;
- (void)setSelectStageProvince:(id)a0 City:(id)a1 District:(id)a2 Street:(id)a3 NationalCode:(id)a4;
- (void)setAllAddressStageData:(id)a0;
- (void)setComponentWhenAppear:(int)a0;
- (id)selectProvice;
- (id)selectCity;
- (id)selectDistrict;
- (id)selectStreet;
- (void).cxx_destruct;

@end
