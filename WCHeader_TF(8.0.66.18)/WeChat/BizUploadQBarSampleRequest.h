@class BaseRequest, SKBuiltinBuffer_t;

@interface BizUploadQBarSampleRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int clientScanId;
@property (retain, nonatomic) SKBuiltinBuffer_t *imageBuffer;
@property (nonatomic) unsigned int totalLength;
@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned int endFlag;
@property (nonatomic) unsigned int decodeResult;
@property (nonatomic) unsigned int decodeSeq;

+ (void)initialize;

@end
