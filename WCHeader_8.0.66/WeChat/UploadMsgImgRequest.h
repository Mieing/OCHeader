@class ImgSourceInfo, BaseRequest, SKBuiltinString_t, NSString, ImgWxaInfo, ImgMpInfo, SKBuiltinBuffer_t;

@interface UploadMsgImgRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) SKBuiltinString_t *clientImgId;
@property (retain, nonatomic) SKBuiltinString_t *fromUserName;
@property (retain, nonatomic) SKBuiltinString_t *toUserName;
@property (nonatomic) unsigned int totalLen;
@property (nonatomic) unsigned int startPos;
@property (nonatomic) unsigned int dataLen;
@property (retain, nonatomic) SKBuiltinBuffer_t *data;
@property (nonatomic) unsigned int msgType;
@property (retain, nonatomic) NSString *msgSource;
@property (nonatomic) unsigned int compressType;
@property (nonatomic) int netType;
@property (nonatomic) int photoFrom;
@property (retain, nonatomic) NSString *mediaId;
@property (retain, nonatomic) NSString *cdnbigImgUrl;
@property (retain, nonatomic) NSString *cdnmidImgUrl;
@property (retain, nonatomic) NSString *aeskey;
@property (nonatomic) int encryVer;
@property (nonatomic) int cdnbigImgSize;
@property (nonatomic) int cdnmidImgSize;
@property (retain, nonatomic) NSString *cdnthumbImgUrl;
@property (nonatomic) int cdnthumbImgSize;
@property (nonatomic) int cdnthumbImgHeight;
@property (nonatomic) int cdnthumbImgWidth;
@property (retain, nonatomic) NSString *cdnthumbAeskey;
@property (nonatomic) unsigned int reqTime;
@property (retain, nonatomic) NSString *md5;
@property (nonatomic) unsigned int crc32;
@property (nonatomic) unsigned int msgForwardType;
@property (nonatomic) unsigned int hitMd5;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *messageAction;
@property (retain, nonatomic) NSString *meesageExt;
@property (retain, nonatomic) NSString *mediaTagName;
@property (retain, nonatomic) NSString *sendMsgTicket;
@property (nonatomic) unsigned int imgType;
@property (retain, nonatomic) NSString *imgInfo;
@property (retain, nonatomic) NSString *platformSignature;
@property (retain, nonatomic) NSString *imgDataHash;
@property (retain, nonatomic) NSString *imgSourceUrl;
@property (nonatomic) unsigned int hevcMidSize;
@property (retain, nonatomic) NSString *rawMd5;
@property (retain, nonatomic) NSString *originSourceMd5;
@property (retain, nonatomic) ImgSourceInfo *imgSourceInfo;
@property (retain, nonatomic) ImgWxaInfo *wxaInfo;
@property (nonatomic) unsigned int spatialType;
@property (retain, nonatomic) NSString *secHashInfoBase64;
@property (nonatomic) unsigned int liveDuration;
@property (nonatomic) unsigned int liveVideoSize;
@property (retain, nonatomic) NSString *liveVideoMd5;
@property (retain, nonatomic) NSString *liveVideoFileId;
@property (nonatomic) unsigned int liveHdvideoSize;
@property (retain, nonatomic) NSString *liveHdvideoMd5;
@property (retain, nonatomic) NSString *liveHdvideoFileId;
@property (retain, nonatomic) ImgMpInfo *imgMpInfo;
@property (retain, nonatomic) NSString *extCommonInfoXml;
@property (nonatomic) unsigned int livePhotoStillImageTimeMs;

+ (void)initialize;

@end
