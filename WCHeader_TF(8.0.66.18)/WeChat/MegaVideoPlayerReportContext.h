@class NSString;

@interface MegaVideoPlayerReportContext : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *finderTabContextId;
@property (retain, nonatomic) NSString *finderContextId;
@property (nonatomic) unsigned int commentScene;
@property (retain, nonatomic) NSString *feedId;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (nonatomic) int currProgress;
@property (nonatomic) int realPlayTime;
@property (nonatomic) int feedStayTime;
@property (nonatomic) int maxProgress;
@property (retain, nonatomic) NSString *playSessionid;
@property (nonatomic) int playForm;
@property (nonatomic) int feedSourceListType;
@property (nonatomic) int channelType;
@property (nonatomic) int channelStyle;
@property (nonatomic) int channelFeedIndex;
@property (retain, nonatomic) NSString *channelName;
@property (nonatomic) int ifChannelPage;
@property (retain, nonatomic) NSString *channelIdStr;
@property (nonatomic) int isHasVoice;
@property (nonatomic) int channelFeedVerticalIndex;

+ (void)initialize;

@end
