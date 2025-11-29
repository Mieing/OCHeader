@class BaseRequest, NSString, SKBuiltinBuffer_t;

@interface ShakeReportRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int opCode;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (nonatomic) int precision;
@property (retain, nonatomic) NSString *macAddr;
@property (retain, nonatomic) NSString *cellId;
@property (nonatomic) unsigned int imgId;
@property (nonatomic) unsigned int times;
@property (nonatomic) int gpssource;
@property (retain, nonatomic) SKBuiltinBuffer_t *clientCheckData;
@property (retain, nonatomic) SKBuiltinBuffer_t *extSpamInfo;

+ (void)initialize;

@end
