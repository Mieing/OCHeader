@class NSString, CLLocation, NSDictionary;

@interface AWELocationServicePersistModel : NSObject <IESLLLocationServicePersistModel, ACCLocationModel, NSCoding, NSCopying>

@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *cityCode;
@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) CLLocation *safeLocation;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *province;
@property (copy, nonatomic) NSString *provinceCode;
@property (copy, nonatomic) NSString *district;
@property (copy, nonatomic) NSString *districtCode;
@property (copy, nonatomic) NSString *address;
@property (nonatomic) long long source;
@property (nonatomic) double timestamp;
@property (copy, nonatomic) NSString *serverLogId;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *city;
@property (readonly, copy, nonatomic) NSString *cityCode;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) CLLocation *standardLocation;
@property (readonly, copy, nonatomic) NSString *country;
@property (readonly, copy, nonatomic) NSString *countryCode;
@property (readonly, copy, nonatomic) NSString *province;
@property (readonly, copy, nonatomic) NSString *provinceCode;
@property (readonly, copy, nonatomic) NSString *district;
@property (readonly, copy, nonatomic) NSString *districtCode;
@property (readonly, copy, nonatomic) NSString *address;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *cityCode;
@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) CLLocation *safeLocation;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *province;
@property (copy, nonatomic) NSString *provinceCode;
@property (copy, nonatomic) NSString *district;
@property (copy, nonatomic) NSString *districtCode;
@property (copy, nonatomic) NSString *address;
@property (nonatomic) long long source;
@property (nonatomic) double timestamp;
@property (copy, nonatomic) NSString *serverLogId;
@property (copy, nonatomic) NSDictionary *extraInfo;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
