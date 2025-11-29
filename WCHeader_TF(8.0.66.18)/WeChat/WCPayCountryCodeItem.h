@class NSArray, NSString, CountryCodeWrap, UILabel;
@protocol WCPayCountryCodeItemDelegate;

@interface WCPayCountryCodeItem : WCBaseInfoItem <CountryCodePickerDelegate>

@property (retain, nonatomic) UILabel *countryLabel;
@property (retain, nonatomic) CountryCodeWrap *currentCountryCode;
@property (weak, nonatomic) id<WCPayCountryCodeItemDelegate> delegate;
@property (nonatomic) BOOL hideCode;
@property (retain, nonatomic) NSArray *bannedCountryCodes;
@property (retain, nonatomic) NSString *noCountryCodeTip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCountryCode:(id)a0;
- (void)setISOCountryCode:(id)a0;
- (id)initWithTitle:(id)a0 tip:(id)a1 key:(id)a2;
- (id)initWithTitle:(id)a0 tip:(id)a1 key:(id)a2 getDefaultCode:(BOOL)a3;
- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)becomeFirstResponder;
- (id)getValue;
- (void)reloadCountryLabel;
- (void)CountryCodePickerDidPickCountryCode:(id)a0;
- (id)currentAccessibilityDesc;
- (void).cxx_destruct;

@end
