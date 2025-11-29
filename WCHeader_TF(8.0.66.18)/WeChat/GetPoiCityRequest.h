@class BaseRequest, LbsLocation, NSString;

@interface GetPoiCityRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) LbsLocation *loc;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *srcCity;
@property (retain, nonatomic) NSString *locality;
@property (retain, nonatomic) NSString *sublocality;
@property (retain, nonatomic) NSString *administrativeAreaLevel3;
@property (retain, nonatomic) NSString *administrativeAreaLevel2;
@property (retain, nonatomic) NSString *administrativeAreaLevel1;

+ (void)initialize;

@end
