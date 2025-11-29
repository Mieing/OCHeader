@class NSString;

@interface CountryCodeWrap : NSObject

@property (retain, nonatomic) NSString *m_nsCountryName;
@property (retain, nonatomic) NSString *m_nsCountryNamePinYin;
@property (retain, nonatomic) NSString *m_nsCountryCode;
@property (retain, nonatomic) NSString *m_nsISOCountryCodes;
@property (nonatomic) unsigned int m_uiCountryNamesChineseStrokesCount;

- (id)description;
- (long long)compare:(id)a0;
- (void).cxx_destruct;

@end
