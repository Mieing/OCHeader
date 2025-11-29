@class NSMutableDictionary;

@interface PhoneNumberFormatLogic : MMObject {
    NSMutableDictionary *m_dicConfig;
}

- (void)loadConfig;
- (id)init;
- (BOOL)matchLeadingString:(id)a0 withRegex:(id)a1;
- (id)getMatch:(id)a0 withRegex:(id)a1;
- (id)getPurePhoneNum:(id)a0;
- (id)countrFormatConfigForCountryId:(id)a0;
- (id)formatInfoForPhoneNum:(id)a0 countryInfo:(id)a1;
- (id)autoFullLengthNum:(id)a0 countryInfo:(id)a1;
- (id)formatedNumForFullNum:(id)a0 fullNum:(id)a1;
- (id)formatedNumAfterTrimAutoFillNum:(id)a0 fullNum:(id)a1;
- (id)getFormatedForNum:(id)a0 countryInfo:(id)a1;
- (id)getFormatedForNum:(id)a0 countryIsoCode:(id)a1;
- (id)getFormatedForNum:(id)a0 countryCode:(id)a1;
- (id)getFormatedForNum:(id)a0;
- (id)getCountryCodeFromFullPhoneNum:(id)a0;
- (id)getPhoneNumFromFullPhoneNum:(id)a0;
- (id)getPrivacyPhoneNumFromFullPhoneNum:(id)a0;
- (void).cxx_destruct;

@end
