@class BaseRequest, NSMutableArray, SKBuiltinString_t;

@interface ReportVoiceSendResultReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int voiceIdCount;
@property (retain, nonatomic) NSMutableArray *voiceIdList;
@property (retain, nonatomic) SKBuiltinString_t *voiceResult;
@property (retain, nonatomic) SKBuiltinString_t *vadVersion;
@property (nonatomic) int scene;

+ (void)initialize;

@end
