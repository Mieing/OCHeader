@class WCRedesignTextItem, PhoneNumberFormatLogic, NSString, WCRedesignButtonItem, CountryCodeWrap;
@protocol WCBaseInfoItemDelegate, MMUIViewControllerDelegate;

@interface WCFullPhoneNumInputHelper : NSObject <WCBaseInfoItemDelegate, CountryCodePickerDelegate>

@property (retain, nonatomic) WCRedesignButtonItem *regionButtonItem;
@property (retain, nonatomic) WCRedesignTextItem *phoneNumberTextItem;
@property (weak, nonatomic) id<MMUIViewControllerDelegate> vcDelegate;
@property (weak, nonatomic) id<WCBaseInfoItemDelegate> itemDelegate;
@property (readonly, nonatomic) PhoneNumberFormatLogic *phoneNumberFormatLogic;
@property (retain, nonatomic) CountryCodeWrap *countryCodeWrap;
@property (retain, nonatomic) NSString *countryISOCode;
@property (copy, nonatomic) id /* block */ onSetNeedsLayout;
@property (copy, nonatomic) id /* block */ onCountryCodeChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)config;
- (void)configItemsMaxTitleWidth;
- (void)setCountryISOCode:(id)a0;
- (id)countryISOCode;
- (void)formatPhoneNumber;
- (id)phoneNumText;
- (id)purePhoneNum;
- (id)countryCode;
- (id)formatedFullPhoneNum;
- (void)callSetNeedsLayout;
- (void)showCountryCodePicker;
- (void)CountryCodePickerDidPickCountryCode:(id)a0;
- (BOOL)WCBaseInfoItemShouldBeginEditing:(id)a0;
- (void)WCBaseInfoItemCancelEdit:(id)a0;
- (void)WCBaseInfoItemBeginEdit:(id)a0;
- (void)WCBaseInfoItemEndEdit:(id)a0;
- (void)WCBaseInfoItemPressReturnKey:(id)a0;
- (void)WCBaseInfoItemEditChanged:(id)a0;
- (void).cxx_destruct;

@end
