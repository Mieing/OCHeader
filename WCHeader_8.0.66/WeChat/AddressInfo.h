@class NSData;

@interface AddressInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSData *receiverName;
@property (retain, nonatomic) NSData *postalCode;
@property (retain, nonatomic) NSData *provinceName;
@property (retain, nonatomic) NSData *cityName;
@property (retain, nonatomic) NSData *countyName;
@property (retain, nonatomic) NSData *detailInfo;
@property (retain, nonatomic) NSData *nationalCode;
@property (retain, nonatomic) NSData *telNumber;

+ (void)initialize;

@end
