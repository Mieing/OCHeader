@class NSString, NSMutableArray;

@interface BizRecArtCardAppMsg : WXPBGeneratedMessage

@property (nonatomic) unsigned int flag;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *digest;
@property (retain, nonatomic) NSString *contentUrl;
@property (retain, nonatomic) NSString *coverImgUrl;
@property (retain, nonatomic) NSString *coverImgUrl11;
@property (retain, nonatomic) NSString *coverImgUrl2351;
@property (nonatomic) unsigned int itemShowType;
@property (retain, nonatomic) NSString *videoId;
@property (nonatomic) unsigned int videoWidth;
@property (nonatomic) unsigned int videoHeight;
@property (nonatomic) unsigned int videoDuration;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned long long videoViewNum;
@property (retain, nonatomic) NSMutableArray *negativeFeedbackReason;
@property (nonatomic) unsigned int showNegativeFeedbackReason;
@property (retain, nonatomic) NSString *recommendReason;
@property (retain, nonatomic) NSString *voicePlayUrl;
@property (nonatomic) unsigned int voiceDuration;
@property (nonatomic) unsigned int recRk;
@property (retain, nonatomic) NSString *recInfo;
@property (retain, nonatomic) NSString *finderFeedXml;
@property (retain, nonatomic) NSString *negativeFeedbackTitle;
@property (nonatomic) unsigned int styleFlag;

+ (void)initialize;

@end
