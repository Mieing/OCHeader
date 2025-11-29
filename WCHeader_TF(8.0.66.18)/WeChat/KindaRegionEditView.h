@class NSArray, NSString, UITextField, MMKRegionEditViewOnRegionSelectedCallback;

@interface KindaRegionEditView : KindaView <UITextFieldDelegate, WCPayRegionPickerViewControllerDelegate, MMKRegionEditView> {
    UITextField *m_view;
    NSString *m_country;
    NSString *m_province;
    NSString *m_city;
    MMKRegionEditViewOnRegionSelectedCallback *m_callback;
}

@property (nonatomic) BOOL m_showDomesticCity;
@property (nonatomic) BOOL m_showSelectedLocation;
@property (nonatomic) BOOL m_autoLocation;
@property (retain, nonatomic) NSArray *areaExcudeArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)getView;
- (void)setShowDomesticCity:(BOOL)a0;
- (BOOL)getShowDomesticCity;
- (void)setShowSelectedLocation:(BOOL)a0;
- (BOOL)getShowSelectedLocation;
- (void)setAutoLocation:(BOOL)a0;
- (BOOL)getAutoLocation;
- (void)setFocus:(BOOL)a0;
- (BOOL)getFocus;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (id)getAllCountries;
- (BOOL)bannedCode:(id)a0;
- (void)picker:(id)a0 didPick:(id)a1;
- (id)getCountry;
- (id)getProvince;
- (id)getCity;
- (BOOL)isUSOrCA;
- (void)setOnRegionSelectedCallback:(id)a0;
- (void)setOriginRegion:(id)a0 province:(id)a1 city:(id)a2 areaStr:(id)a3;
- (void)setAreaExcludeArray:(id)a0;
- (BOOL)getSupportDynamicSize;
- (void).cxx_destruct;

@end
