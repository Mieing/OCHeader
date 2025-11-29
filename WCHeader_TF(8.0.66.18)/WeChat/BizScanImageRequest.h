@class BaseRequest, SKBuiltinBuffer_t;

@interface BizScanImageRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int clientScanId;
@property (retain, nonatomic) SKBuiltinBuffer_t *imageBuffer;
@property (nonatomic) unsigned int totalLength;
@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned int endFlag;
@property (nonatomic) unsigned int imageType;
@property (nonatomic) unsigned int opcode;
@property (nonatomic) unsigned int sessionId;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
