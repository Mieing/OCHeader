@class NSString;

@interface MegaVideoLocation : WXPBGeneratedMessage

@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *poiName;
@property (retain, nonatomic) NSString *poiAddress;
@property (retain, nonatomic) NSString *poiClassifyId;
@property (nonatomic) unsigned int poiClassifyType;
@property (retain, nonatomic) NSString *province;
@property (retain, nonatomic) NSString *region;
@property (retain, nonatomic) NSString *country;

+ (void)initialize;

@end
