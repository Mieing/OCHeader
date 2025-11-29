@class NSArray, NSString, MMUIViewController;
@protocol WCPayAreaItemDelegate;

@interface WCPayAreaItem : WCBaseTextFieldItem <WCPayRegionPickerViewControllerDelegate, MMRegionPickerViewControllerDelegate> {
    MMUIViewController *m_currentViewController;
    NSString *m_country;
    NSString *m_province;
    NSString *m_city;
}

@property (weak, nonatomic) id<WCPayAreaItemDelegate> m_payAreaItemDelegate;
@property (nonatomic) BOOL disableLocation;
@property (nonatomic) BOOL chinaFirst;
@property (nonatomic) BOOL openSearch;
@property (retain) NSArray *bannedCountryCodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCurrentViewController:(id)a0;
- (BOOL)isUSorCA;
- (id)getCountry;
- (id)getProvince;
- (id)getCity;
- (id)allCountrys;
- (BOOL)bannedCode:(id)a0;
- (void)becomeFirstResponder;
- (void)setCountry:(id)a0 province:(id)a1 city:(id)a2;
- (void)MMRegionPickerDidChoosRegion:(id)a0;
- (void)picker:(id)a0 didPick:(id)a1;
- (id)currentAccessibilityDesc;
- (void).cxx_destruct;

@end
