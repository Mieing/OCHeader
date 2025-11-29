@class NSArray, BDUGByteDanceUnit;

@interface BDUGPlacemark : BDUGBasePlacemark <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) BDUGByteDanceUnit *continentUnit;
@property (copy, nonatomic) BDUGByteDanceUnit *countryUnit;
@property (copy, nonatomic) NSArray *countyUnits;
@property (copy, nonatomic) BDUGByteDanceUnit *administrativeAreaUnit;
@property (copy, nonatomic) BDUGByteDanceUnit *subAdministrativeAreaUnit;
@property (copy, nonatomic) BDUGByteDanceUnit *cityUnit;
@property (copy, nonatomic) BDUGByteDanceUnit *districtUnit;
@property (copy, nonatomic) BDUGByteDanceUnit *townUnit;
@property (copy, nonatomic) BDUGByteDanceUnit *villageUnit;

+ (id)placemarkWithDictionary:(id)a0;

- (id)placemarkWithLevel:(long long)a0;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)toJSON;

@end
