@class BaseRequest, NSString, NSData;

@interface FFHBOpenReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *shareUrl;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *province;
@property (retain, nonatomic) NSString *latitude;
@property (retain, nonatomic) NSString *longitude;
@property (nonatomic) unsigned long long locationTimestamp;
@property (nonatomic) double safeLatitude;
@property (nonatomic) double safeLongitude;
@property (retain, nonatomic) NSData *leftButtonContinue;

+ (void)initialize;

@end
