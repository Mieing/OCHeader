@class BaseRequest, NSString, SKBuiltinBuffer_t;

@interface UploadAppAttachRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned int sdkVersion;
@property (retain, nonatomic) NSString *clientAppDataId;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int totalLen;
@property (nonatomic) unsigned int startPos;
@property (nonatomic) unsigned int dataLen;
@property (retain, nonatomic) SKBuiltinBuffer_t *data;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *md5;

+ (void)initialize;

@end
