@class BaseRequest, SKBuiltinString_t, NSMutableArray;

@interface VoipSpeedResultReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long testId;
@property (nonatomic) unsigned long long roomKey;
@property (nonatomic) unsigned int netType;
@property (retain, nonatomic) SKBuiltinString_t *netName;
@property (retain, nonatomic) SKBuiltinString_t *wifiName;
@property (nonatomic) double longitude;
@property (nonatomic) double latitude;
@property (nonatomic) unsigned int roomId;
@property (nonatomic) unsigned int resultCnt;
@property (retain, nonatomic) NSMutableArray *result;

+ (void)initialize;

@end
