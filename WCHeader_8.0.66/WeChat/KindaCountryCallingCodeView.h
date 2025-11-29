@class NSString, UITextField, WCPayCountryCodeItem, MMKCountryCallingCodeViewOnSelectCallback;

@interface KindaCountryCallingCodeView : KindaView <WCPayCountryCodeItemDelegate, MMKCountryCallingCodeView> {
    UITextField *m_textField;
    MMKCountryCallingCodeViewOnSelectCallback *m_callback;
}

@property (retain, nonatomic) WCPayCountryCodeItem *m_countryCodeItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)getView;
- (void)setFocus:(BOOL)a0;
- (BOOL)getFocus;
- (void)setCountryCode:(id)a0;
- (id)getCountryCode;
- (void)countryCodeItem:(id)a0 didSelectCountryCode:(id)a1;
- (void)countryCodeItem:(id)a0 isCountryCodeValid:(BOOL)a1;
- (void)setOnSelectCallback:(id)a0;
- (id)getNationality;
- (void)setNationality:(id)a0;
- (void)setNationalityExcludeArray:(id)a0;
- (BOOL)getHideCode;
- (void)setHideCode:(BOOL)a0;
- (void)setPlaceHolder:(id)a0;
- (id)getPlaceHolder;
- (void).cxx_destruct;

@end
