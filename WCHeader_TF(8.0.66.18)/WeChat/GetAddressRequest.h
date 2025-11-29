@class BaseRequest, NSString;

@interface GetAddressRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) double longitude;
@property (nonatomic) double latitude;
@property (nonatomic) unsigned int indoorSwitch;
@property (retain, nonatomic) NSString *poiFloor;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
