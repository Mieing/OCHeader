@class NSString, NSMutableArray;

@interface CountryFormatConfig : MMObject

@property (retain, nonatomic) NSString *nsCountryCode;
@property (retain, nonatomic) NSString *nsISOCode;
@property (retain, nonatomic) NSMutableArray *arrayFormats;
@property (nonatomic) unsigned int uiMinLength;
@property (nonatomic) unsigned int uiMaxLength;
@property (nonatomic) BOOL bHasLeading;

- (id)init;
- (void).cxx_destruct;

@end
