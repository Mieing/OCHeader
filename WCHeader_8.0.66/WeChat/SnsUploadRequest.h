@class BaseRequest, NSString, TwitterInfo, SKBuiltinBuffer_t;

@interface SnsUploadRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int startPos;
@property (nonatomic) unsigned int totalLen;
@property (retain, nonatomic) SKBuiltinBuffer_t *buffer;
@property (retain, nonatomic) NSString *clientId;
@property (nonatomic) unsigned int filterStype;
@property (nonatomic) unsigned int syncFlag;
@property (retain, nonatomic) NSString *description;
@property (nonatomic) int photoFrom;
@property (nonatomic) int netType;
@property (retain, nonatomic) TwitterInfo *twitterInfo;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned int extFlag;
@property (retain, nonatomic) NSString *md5;
@property (nonatomic) unsigned int objectType;

+ (void)initialize;

@end
