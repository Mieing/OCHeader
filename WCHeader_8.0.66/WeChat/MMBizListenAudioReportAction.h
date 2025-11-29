@class NSString;

@interface MMBizListenAudioReportAction : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *enterid;
@property (nonatomic) unsigned long long actionTimestampMs;
@property (nonatomic) int actionType;
@property (retain, nonatomic) NSString *currCategoryId;
@property (nonatomic) int songIndexInList;
@property (retain, nonatomic) NSString *recInfo;
@property (retain, nonatomic) NSString *listenid;
@property (nonatomic) unsigned int listenidType;
@property (retain, nonatomic) NSString *finderFeedId;
@property (nonatomic) unsigned int bizuin;
@property (nonatomic) unsigned int appmsgid;
@property (nonatomic) unsigned int itemidx;
@property (retain, nonatomic) NSString *voiceid;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int subScene;
@property (retain, nonatomic) NSString *tabName;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *coverUrl;
@property (retain, nonatomic) NSString *author;
@property (nonatomic) unsigned long long durationMs;
@property (retain, nonatomic) NSString *actionExtraInfo;

+ (void)initialize;

@end
