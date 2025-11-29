@class NSString, BaseResponse;

@interface GetPoiDetailResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *categoryTips;
@property (retain, nonatomic) NSString *businessHour;
@property (retain, nonatomic) NSString *phone;
@property (nonatomic) float priceTips;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (nonatomic) unsigned int source;
@property (nonatomic) unsigned int adCode;
@property (retain, nonatomic) NSString *cityName;
@property (retain, nonatomic) NSString *address;
@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) NSString *province;
@property (retain, nonatomic) NSString *region;

+ (void)initialize;

@end
