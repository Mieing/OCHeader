@class NSString, UILabel, NSMutableArray;
@protocol WCPayAddressItemDelegate;

@interface WCPayAddressItem : WCBaseTextFieldItem <WCPayAddressViewControllerDelegate>

@property (retain) NSString *country;
@property (retain) NSString *province;
@property (retain) NSString *city;
@property (retain) NSString *address;
@property (retain) UILabel *label;
@property (nonatomic) BOOL disableLocation;
@property (nonatomic) BOOL chinaFirst;
@property (nonatomic) BOOL openSearch;
@property (retain) NSMutableArray *bannedCountryCodes;
@property (weak) id<WCPayAddressItemDelegate> addressDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)getValue;
- (double)maxContentWidth;
- (void)updateLabel;
- (void)onTapLabel;
- (BOOL)isUSorCA;
- (id)getCountry;
- (id)getProvince;
- (id)getCity;
- (id)getAddress;
- (id)getAdministrationAddress;
- (void)setCountry:(id)a0 province:(id)a1 city:(id)a2 address:(id)a3;
- (void)updateText;
- (void)becomeFirstResponder;
- (void)onWCPayAddressViewControllerBack;
- (void)onWCPayAddressViewControllerDoneWithCountry:(id)a0 province:(id)a1 city:(id)a2 address:(id)a3;
- (BOOL)onWCPayAddressViewControllerDisableLocation;
- (BOOL)onWCPayAddressViewControllerChinaFirst;
- (BOOL)onWCPayAddressViewControllerOpenSearch;
- (id)onWCPayAddressViewControllerPresetCountry;
- (id)onWCPayAddressViewControllerPresetProvince;
- (id)onWCPayAddressViewControllerPresetCity;
- (id)onWCPayAddressViewControllerPresetAddress;
- (id)onWCPayAddressViewControllerBannedCountryCodes;
- (id)currentAccessibilityDesc;
- (void).cxx_destruct;

@end
