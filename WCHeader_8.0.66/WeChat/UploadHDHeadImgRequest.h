@class BaseRequest, SKBuiltinBuffer_t, NSString;

@interface UploadHDHeadImgRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int totalLen;
@property (nonatomic) unsigned int startPos;
@property (nonatomic) unsigned int headImgType;
@property (retain, nonatomic) SKBuiltinBuffer_t *data;
@property (retain, nonatomic) NSString *imgHash;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) SKBuiltinBuffer_t *extSpamInfo;
@property (retain, nonatomic) NSString *headImgUrl;
@property (retain, nonatomic) NSString *md5;
@property (nonatomic) unsigned int isUploadFromClient;

+ (void)initialize;

@end
