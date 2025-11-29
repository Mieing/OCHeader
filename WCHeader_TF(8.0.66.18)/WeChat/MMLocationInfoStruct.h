@class NSString;

@interface MMLocationInfoStruct : NSObject

@property (readonly, nonatomic) NSString *province;
@property (readonly, nonatomic) NSString *city;
@property (readonly, nonatomic) NSString *district;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) NSString *country;
@property (readonly, nonatomic) long long positionTs;

+ (id)LocationInfoStructWithProvince:(id)a0 city:(id)a1 district:(id)a2 countryCode:(id)a3 country:(id)a4 positionTs:(long long)a5;

- (id)initWithProvince:(id)a0 city:(id)a1 district:(id)a2 countryCode:(id)a3 country:(id)a4 positionTs:(long long)a5;
- (id)description;
- (void).cxx_destruct;

@end
