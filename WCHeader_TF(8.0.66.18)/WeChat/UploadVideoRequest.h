@class BaseRequest, NSString, VideoWxaInfo, SKBuiltinBuffer_t;

@interface UploadVideoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *clientMsgId;
@property (retain, nonatomic) NSString *fromUserName;
@property (retain, nonatomic) NSString *toUserName;
@property (nonatomic) unsigned int thumbTotalLen;
@property (nonatomic) unsigned int thumbStartPos;
@property (retain, nonatomic) SKBuiltinBuffer_t *thumbData;
@property (nonatomic) unsigned int videoTotalLen;
@property (nonatomic) unsigned int videoStartPos;
@property (retain, nonatomic) SKBuiltinBuffer_t *videoData;
@property (nonatomic) unsigned int playLength;
@property (nonatomic) unsigned int networkEnv;
@property (nonatomic) unsigned int cameraType;
@property (nonatomic) unsigned int funcFlag;
@property (retain, nonatomic) NSString *msgSource;
@property (retain, nonatomic) NSString *cdnvideoUrl;
@property (retain, nonatomic) NSString *aeskey;
@property (nonatomic) int encryVer;
@property (retain, nonatomic) NSString *cdnthumbUrl;
@property (nonatomic) int cdnthumbImgSize;
@property (nonatomic) int cdnthumbImgHeight;
@property (nonatomic) int cdnthumbImgWidth;
@property (retain, nonatomic) NSString *cdnthumbAeskey;
@property (nonatomic) int videoFrom;
@property (nonatomic) unsigned int reqTime;
@property (retain, nonatomic) NSString *videoMd5;
@property (retain, nonatomic) NSString *streamVideoUrl;
@property (nonatomic) unsigned int streamVideoTotalTime;
@property (retain, nonatomic) NSString *streamVideoTitle;
@property (retain, nonatomic) NSString *streamVideoWording;
@property (retain, nonatomic) NSString *streamVideoWebUrl;
@property (retain, nonatomic) NSString *streamVideoThumbUrl;
@property (retain, nonatomic) NSString *streamVideoPublishId;
@property (retain, nonatomic) NSString *streamVideoAdUxInfo;
@property (retain, nonatomic) NSString *statExtStr;
@property (nonatomic) unsigned int hitMd5;
@property (retain, nonatomic) NSString *videoNewMd5;
@property (nonatomic) unsigned int crc32;
@property (nonatomic) unsigned int msgForwardType;
@property (nonatomic) unsigned int source;
@property (retain, nonatomic) NSString *sendMsgTicket;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *messageAction;
@property (retain, nonatomic) NSString *messageExt;
@property (retain, nonatomic) NSString *mediaTagName;
@property (retain, nonatomic) NSString *videoUploadToken;
@property (nonatomic) unsigned long long overwriteNewMsgId;
@property (retain, nonatomic) NSString *rawVideoMd5;
@property (retain, nonatomic) NSString *rawVideoFileId;
@property (retain, nonatomic) NSString *rawVideoAeskey;
@property (nonatomic) unsigned int rawVideoLength;
@property (nonatomic) unsigned int hitRawMd5;
@property (retain, nonatomic) NSString *originSourceMd5;
@property (nonatomic) unsigned int spatialType;
@property (retain, nonatomic) VideoWxaInfo *wxaInfo;
@property (retain, nonatomic) NSString *extCommonInfoXml;

+ (void)initialize;

@end
