@class NSString;

@interface PoiCtrlInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *poiId;
@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *poiName;
@property (nonatomic) float latitude;
@property (nonatomic) float longitude;
@property (retain, nonatomic) NSString *poiQuery;
@property (nonatomic) unsigned long long snsId;

+ (void)initialize;

@end
