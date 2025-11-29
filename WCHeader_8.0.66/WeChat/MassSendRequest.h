@class BaseRequest, NSString, SKBuiltinBuffer_t;

@interface MassSendRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *toList;
@property (retain, nonatomic) NSString *toListMd5;
@property (retain, nonatomic) NSString *clientId;
@property (nonatomic) unsigned int msgType;
@property (nonatomic) unsigned int mediaTime;
@property (retain, nonatomic) SKBuiltinBuffer_t *dataBuffer;
@property (nonatomic) unsigned int dataStartPos;
@property (nonatomic) unsigned int dataTotalLen;
@property (nonatomic) unsigned int thumbTotalLen;
@property (nonatomic) unsigned int thumbStartPos;
@property (retain, nonatomic) SKBuiltinBuffer_t *thumbData;
@property (nonatomic) unsigned int cameraType;
@property (nonatomic) unsigned int videoSource;
@property (nonatomic) unsigned int toListCount;
@property (nonatomic) unsigned int isSendAgain;
@property (nonatomic) unsigned int compressType;
@property (nonatomic) unsigned int voiceFormat;
@property (retain, nonatomic) NSString *videoUrl;
@property (retain, nonatomic) NSString *thumbUrl;
@property (nonatomic) unsigned int thumbWidth;
@property (nonatomic) unsigned int thumbHeight;
@property (retain, nonatomic) NSString *thumbAeskey;
@property (retain, nonatomic) NSString *videoAeskey;
@property (retain, nonatomic) NSString *md5;
@property (nonatomic) unsigned int hasUploadedToCdn;

+ (void)initialize;

@end
