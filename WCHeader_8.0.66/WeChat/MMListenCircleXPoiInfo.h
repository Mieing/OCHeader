@class NSString;

@interface MMListenCircleXPoiInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long adcode;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *location;
@property (retain, nonatomic) NSString *province;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;

+ (void)initialize;

@end
