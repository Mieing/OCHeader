@class BaseRequest, PositionInfo;

@interface ScanStreetViewRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) PositionInfo *userPos;
@property (nonatomic) unsigned int scene;
@property (nonatomic) float heading;
@property (nonatomic) float pitch;

+ (void)initialize;

@end
