@class NSString, NSArray, WCAddressStageDataStruct, MMCommonActionSheetPicker;

@interface WCPOIAddressPickerItem : WCBaseTextFieldItem <MMCommonActionSheetPickerDelegate, WCBizPickerViewDelegate> {
    NSArray *m_arrStage;
    WCAddressStageDataStruct *m_selectProvince;
    WCAddressStageDataStruct *m_selectCity;
    WCAddressStageDataStruct *m_selectDistrict;
    long long m_uiCurProvince;
    long long m_uiCurCity;
    long long m_uiCurDistrict;
    MMCommonActionSheetPicker *m_pickerView;
    BOOL m_bLockProvince;
    BOOL m_bLockCity;
    BOOL m_bLockDistrict;
}

@property (nonatomic) BOOL lockProviceAndCity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAllAddressStageData:(id)a0;
- (void)setSelectStageProvince:(id)a0 City:(id)a1 District:(id)a2;
- (BOOL)selectCityInDistrict:(id)a0;
- (id)getSelectProvice;
- (id)getSelectCity;
- (id)getSelectDistrict;
- (void)resetSelectedAddress;
- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)becomeFirstResponder;
- (void)SetText;
- (void)reloadComponents;
- (id)getAddressDataItems;
- (id)getProvinceDataItems;
- (id)getCityDataItems;
- (id)getDistrictDataItems;
- (void)onPickerViewDidSelectRow:(long long)a0 inComponent:(long long)a1 PickItem:(id)a2;
- (void)commonPickerCancel:(id)a0;
- (void)commonPickerConfirm:(id)a0;
- (void).cxx_destruct;

@end
