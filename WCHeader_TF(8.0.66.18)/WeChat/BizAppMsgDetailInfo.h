@class NSString, BizAppMsgDetailInfo_PicUrlsMsg, NSData, BizAppMsgDetailInfo_PreloadPictureInfo, BizAppMsgDetailInfo_MMListenItemExt, BizProfileFinderLiveInfo;

@interface BizAppMsgDetailInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *digest;
@property (nonatomic) unsigned int itemIndex;
@property (retain, nonatomic) NSString *contentUrl;
@property (retain, nonatomic) NSString *sourceUrl;
@property (retain, nonatomic) NSString *coverImgUrl;
@property (retain, nonatomic) NSString *coverImgUrl11;
@property (retain, nonatomic) NSString *coverImgUrl2351;
@property (nonatomic) unsigned int itemShowType;
@property (nonatomic) unsigned int audioId;
@property (nonatomic) unsigned int audioDuRation;
@property (retain, nonatomic) NSString *audioPlayUrl;
@property (retain, nonatomic) NSString *videoId;
@property (nonatomic) unsigned int videoWidth;
@property (nonatomic) unsigned int videoHeight;
@property (nonatomic) unsigned int videoDuration;
@property (retain, nonatomic) NSString *showDesc;
@property (retain, nonatomic) NSString *authorDesc;
@property (nonatomic) unsigned int picCount;
@property (nonatomic) unsigned int isPaySubscribe;
@property (nonatomic) unsigned int isPaid;
@property (retain, nonatomic) BizAppMsgDetailInfo_PicUrlsMsg *picUrls;
@property (retain, nonatomic) NSString *coverImgUrl169;
@property (retain, nonatomic) NSString *coverImgUrl169640;
@property (retain, nonatomic) NSString *finderFeedXml;
@property (retain, nonatomic) BizProfileFinderLiveInfo *finderLive;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int msgid;
@property (retain, nonatomic) NSString *voiceId;
@property (retain, nonatomic) NSString *tid;
@property (retain, nonatomic) NSString *nonceId;
@property (nonatomic) unsigned int voiceType;
@property (retain, nonatomic) NSString *textTitle;
@property (retain, nonatomic) NSString *moreActionJumpUrl;
@property (retain, nonatomic) NSData *listenItem;
@property (nonatomic) unsigned int isModified;
@property (nonatomic) unsigned int canModifyByWxa;
@property (retain, nonatomic) NSString *wxaEditJumpUrl;
@property (retain, nonatomic) NSString *appEditJumpUrl;
@property (retain, nonatomic) BizAppMsgDetailInfo_PreloadPictureInfo *preloadPictureInfo;
@property (retain, nonatomic) BizAppMsgDetailInfo_MMListenItemExt *listenItemExt;

+ (void)initialize;

@end
