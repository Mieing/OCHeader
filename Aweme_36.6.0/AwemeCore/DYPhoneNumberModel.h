@class NSString;

@interface DYPhoneNumberModel : MTLModel <NSCopying>

@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *number;
@property (nonatomic) BOOL shouldShowMaskNumber;

- (id)hideFourPlacesForPhoneNumberWithoutCountryCode:(id)a0;
- (id)numberWithCountryCode;
- (id)numberStringValueWithStar;
- (id)numberStringValueWithStarHaveCountryCode:(BOOL)a0;
- (id)numberStringWithSpaceAfterCountryCode;
- (id)numberStringWithSpecialFormatHideChainCode:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
