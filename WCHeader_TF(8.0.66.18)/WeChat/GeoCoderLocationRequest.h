@class BaseRequest, NSString;

@interface GeoCoderLocationRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) double longitude;
@property (nonatomic) double latitude;
@property (nonatomic) unsigned int getPoi;
@property (retain, nonatomic) NSString *poiOptions;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int sceneLanguage;

+ (void)initialize;

@end
