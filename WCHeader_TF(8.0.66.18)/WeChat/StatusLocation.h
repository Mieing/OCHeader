@class NSString;

@interface StatusLocation : WXPBGeneratedMessage

@property (nonatomic) double longitude;
@property (nonatomic) double latitude;
@property (retain, nonatomic) NSString *poiId;
@property (retain, nonatomic) NSString *poiName;
@property (retain, nonatomic) NSString *nation;
@property (retain, nonatomic) NSString *province;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *district;
@property (retain, nonatomic) NSString *street;
@property (retain, nonatomic) NSString *detail;

+ (void)initialize;

@end
