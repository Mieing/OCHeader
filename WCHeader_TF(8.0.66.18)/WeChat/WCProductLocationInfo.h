@class NSString;

@interface WCProductLocationInfo : NSObject

@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) NSString *province;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *address;
@property (nonatomic) float latitude;
@property (nonatomic) float longitude;

- (void).cxx_destruct;

@end
