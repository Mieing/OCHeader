@class ImgSourceInfo, NSString, ImgWxaInfo, SKBuiltinBuffer_t;

@interface CDNUploadMsgImgPrepareRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *clientImgId;
@property (retain, nonatomic) NSString *fromUserName;
@property (retain, nonatomic) NSString *toUserName;
@property (nonatomic) int thumbHeight;
@property (nonatomic) int thumbWidth;
@property (retain, nonatomic) NSString *msgSource;
@property (retain, nonatomic) SKBuiltinBuffer_t *clientStat;
@property (nonatomic) int scene;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (retain, nonatomic) NSString *attachedContent;
@property (retain, nonatomic) NSString *aeskey;
@property (nonatomic) int encryVer;
@property (nonatomic) unsigned int crc32;
@property (nonatomic) unsigned int msgForwardType;
@property (nonatomic) unsigned int source;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *messageAction;
@property (retain, nonatomic) NSString *meesageExt;
@property (retain, nonatomic) NSString *mediaTagName;
@property (retain, nonatomic) NSString *sendMsgTicket;
@property (retain, nonatomic) NSString *platformSignature;
@property (retain, nonatomic) NSString *imgDataHash;
@property (retain, nonatomic) NSString *imgSourceUrl;
@property (nonatomic) unsigned int noCommit;
@property (retain, nonatomic) ImgSourceInfo *imgSourceInfo;
@property (retain, nonatomic) ImgWxaInfo *wxaInfo;
@property (nonatomic) unsigned int spatialType;
@property (retain, nonatomic) NSString *secHashInfoBase64;

+ (void)initialize;

@end
