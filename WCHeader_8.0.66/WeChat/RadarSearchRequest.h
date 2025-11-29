@class BaseRequest, NSString;

@interface RadarSearchRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int opCode;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (nonatomic) int precision;
@property (retain, nonatomic) NSString *macAddr;
@property (retain, nonatomic) NSString *cellId;
@property (nonatomic) int gpssource;

+ (void)initialize;

@end
