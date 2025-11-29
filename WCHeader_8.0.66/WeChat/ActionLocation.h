@class NSString;

@interface ActionLocation : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *province;
@property (retain, nonatomic) NSString *city;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) unsigned long long locationTimestamp;
@property (retain, nonatomic) NSString *encryptLatitude;
@property (retain, nonatomic) NSString *encryptLongitude;
@property (retain, nonatomic) NSString *encryptUserinfo;
@property (retain, nonatomic) NSString *encryptKey;

+ (void)initialize;

@end
