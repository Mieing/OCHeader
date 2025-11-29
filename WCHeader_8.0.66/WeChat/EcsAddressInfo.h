@class NSString;

@interface EcsAddressInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *postalCode;
@property (retain, nonatomic) NSString *provinceName;
@property (retain, nonatomic) NSString *cityName;
@property (retain, nonatomic) NSString *countyName;
@property (retain, nonatomic) NSString *detailInfo;
@property (retain, nonatomic) NSString *nationalCode;
@property (retain, nonatomic) NSString *telNumber;
@property (retain, nonatomic) NSString *houseNumber;

+ (void)initialize;

@end
