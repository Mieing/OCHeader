@class NSString, NSArray;

@interface BDUGSystemPlacemark : BDUGBasePlacemark <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *detailedAddress;
@property (copy, nonatomic) NSString *postalCode;
@property (copy, nonatomic) NSString *ISOcountryCode;
@property (copy, nonatomic) NSString *inlandWater;
@property (copy, nonatomic) NSString *ocean;
@property (copy, nonatomic) NSArray *areasOfInterest;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)toJSON;

@end
