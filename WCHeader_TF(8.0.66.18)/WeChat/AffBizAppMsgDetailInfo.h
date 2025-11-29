@class AffBizProfileFinderLiveInfo, NSString, NSData, AffFeaturedInfo, AffBizAppMsgDetailInfo_MMListenItemExt, AffPicUrlsMsg, AffSuggestedCoverImgInfo, AffBizAppMsgDetailInfo_PreloadPictureInfo;

@interface AffBizAppMsgDetailInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *digest;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) unsigned int itemIndex;
@property (retain, nonatomic) NSString *contentUrl;
@property (retain, nonatomic) NSString *sourceUrl;
@property (retain, nonatomic) NSString *coverImgUrl;
@property (retain, nonatomic) NSString *coverImgUrl11;
@property (retain, nonatomic) NSString *coverImgUrl2351;
@property (nonatomic) unsigned int itemShowType;
@property (retain, nonatomic) NSString *author;
@property (nonatomic) unsigned int copyRightStatus;
@property (nonatomic) unsigned int isOriginal;
@property (nonatomic) unsigned int audioId;
@property (nonatomic) unsigned int audioDuration;
@property (retain, nonatomic) NSString *audioPlayUrl;
@property (retain, nonatomic) NSString *videoId;
@property (nonatomic) unsigned int videoWidth;
@property (nonatomic) unsigned int videoHeight;
@property (nonatomic) unsigned int videoDuration;
@property (retain, nonatomic) NSString *showDesc;
@property (retain, nonatomic) NSString *authorDesc;
@property (nonatomic) unsigned int hitTxVideo;
@property (retain, nonatomic) NSString *txVideoVid;
@property (nonatomic) unsigned int isMpVideo;
@property (nonatomic) unsigned int canReward;
@property (retain, nonatomic) NSData *appMsgContext;
@property (nonatomic) unsigned int picCount;
@property (nonatomic) unsigned int isPaySubscribe;
@property (nonatomic) unsigned int isPaid;
@property (retain, nonatomic) AffPicUrlsMsg *picUrls;
@property (retain, nonatomic) NSString *coverImgUrl169;
@property (retain, nonatomic) NSString *coverImgUrl169640;
@property (retain, nonatomic) NSString *finderFeedXml;
@property (retain, nonatomic) AffBizProfileFinderLiveInfo *finderLive;
@property (retain, nonatomic) AffSuggestedCoverImgInfo *suggestedCoverImg;
@property (retain, nonatomic) AffFeaturedInfo *featuredInfo;
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
@property (retain, nonatomic) AffBizAppMsgDetailInfo_PreloadPictureInfo *preloadPictureInfo;
@property (retain, nonatomic) AffBizAppMsgDetailInfo_MMListenItemExt *listenItemExt;

+ (void)initialize;

@end
