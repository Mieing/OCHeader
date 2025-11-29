@class NSString;

@interface UserLocation : WXPBGeneratedMessage

@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *province;
@property (nonatomic) unsigned int adcode;

+ (void)initialize;

@end
