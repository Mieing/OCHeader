@class NSDictionary;

@interface DYCountryPhoneCodeManager : NSObject

@property (copy, nonatomic) NSDictionary *countryInfoDic;

- (void)setupCountryInfoMap;
- (id)currentCountryPhoneCode;
- (id)phoneCodeWithCountry:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
