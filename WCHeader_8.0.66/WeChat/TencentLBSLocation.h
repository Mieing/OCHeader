@class NSString, NSArray, CLLocation, NSNumber;

@interface TencentLBSLocation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CLLocation *location;
@property (nonatomic) long long areaStat;
@property (copy, nonatomic) NSString *provider;
@property (copy, nonatomic) NSNumber *steps;
@property (copy, nonatomic) NSNumber *indoorPdrSteps;
@property (copy, nonatomic) NSString *buildingId;
@property (copy, nonatomic) NSString *buildingFloor;
@property (nonatomic) long long indoorLocationType;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *address;
@property (nonatomic) long long nationCode;
@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *nation;
@property (copy, nonatomic) NSString *province;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *district;
@property (copy, nonatomic) NSString *town;
@property (copy, nonatomic) NSString *village;
@property (copy, nonatomic) NSString *street;
@property (copy, nonatomic) NSString *street_no;
@property (retain, nonatomic) NSArray *poiList;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)distanceFromLocation:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
