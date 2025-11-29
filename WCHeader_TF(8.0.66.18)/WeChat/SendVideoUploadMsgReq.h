@class BaseRequest, NSString;

@interface SendVideoUploadMsgReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *clientMsgId;
@property (retain, nonatomic) NSString *fromUserName;
@property (retain, nonatomic) NSString *toUserName;
@property (retain, nonatomic) NSString *cdnthumbUrl;
@property (retain, nonatomic) NSString *cdnthumbAeskey;
@property (nonatomic) unsigned int cdnthumbImgSize;
@property (nonatomic) unsigned int cdnthumbImgHeight;
@property (nonatomic) unsigned int cdnthumbImgWidth;
@property (nonatomic) unsigned int playLength;
@property (retain, nonatomic) NSString *msgSource;
@property (retain, nonatomic) NSString *videoMd5;
@property (retain, nonatomic) NSString *videoNewMd5;
@property (nonatomic) unsigned int videoLength;
@property (retain, nonatomic) NSString *rawVideoMd5;
@property (nonatomic) unsigned int rawVideoLength;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *messageAction;
@property (retain, nonatomic) NSString *messageExt;
@property (retain, nonatomic) NSString *mediaTagName;
@property (retain, nonatomic) NSString *cdnthumbMd5;

+ (void)initialize;

@end
