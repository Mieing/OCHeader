@class NSDictionary;

@interface IESAccountPhoneCountryCodeManager : NSObject

@property (copy, nonatomic) NSDictionary *countryInfoDic;

- (void)setupCountryInfoMap;
- (id)phoneCodeWithCountry:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
