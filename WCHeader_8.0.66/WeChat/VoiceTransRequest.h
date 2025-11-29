@class BaseRequest, NSString, SKBuiltinString_t, NSMutableArray, SKBuiltinBuffer_t;

@interface VoiceTransRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) SKBuiltinBuffer_t *data;
@property (nonatomic) unsigned int offset;
@property (retain, nonatomic) NSString *clientVoiceId;
@property (nonatomic) unsigned int endFlag;
@property (nonatomic) unsigned int voiceEncodeType;
@property (nonatomic) unsigned int seq;
@property (nonatomic) unsigned int fetchVoiceIdCount;
@property (retain, nonatomic) NSMutableArray *fetchVoiceIds;
@property (retain, nonatomic) SKBuiltinString_t *vadVersion;
@property (nonatomic) unsigned int languageType;
@property (nonatomic) int scene;
@property (nonatomic) unsigned int backendVad;

+ (void)initialize;

@end
