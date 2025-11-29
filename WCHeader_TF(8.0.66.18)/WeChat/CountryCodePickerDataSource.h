@class NSArray, NSMutableDictionary, NSMutableArray;

@interface CountryCodePickerDataSource : NSObject {
    NSArray *m_arrData;
    NSMutableDictionary *m_dicKeyToCountryCode;
    NSMutableArray *m_arrAllKeys;
}

@property (retain, nonatomic) NSArray *bannedCountryCodes;
@property (readonly, nonatomic) NSArray *countryCodes;
@property (readonly, nonatomic) NSMutableDictionary *dicKeyToCountryCode;
@property (readonly, nonatomic) NSMutableArray *allKeys;

- (id)initWithBannedCountryCodes:(id)a0;
- (void).cxx_destruct;

@end
