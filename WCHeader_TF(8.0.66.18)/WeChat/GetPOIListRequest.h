@class BaseRequest, NSString, SKBuiltinBuffer_t;

@interface GetPOIListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int opCode;
@property (retain, nonatomic) NSString *keyword;
@property (retain, nonatomic) SKBuiltinBuffer_t *buff;
@property (nonatomic) double longitude;
@property (nonatomic) double latitude;
@property (nonatomic) double originalLongitude;
@property (nonatomic) double originalLatitude;
@property (nonatomic) unsigned int isAutoQuery;
@property (nonatomic) double scale;
@property (nonatomic) unsigned int extSence;
@property (nonatomic) unsigned int indoorSwitch;
@property (retain, nonatomic) NSString *buildingId;
@property (retain, nonatomic) NSString *floorName;

+ (void)initialize;

@end
