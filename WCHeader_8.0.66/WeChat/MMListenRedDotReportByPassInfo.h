@class NSString;

@interface MMListenRedDotReportByPassInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *wxUsername;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *showUsername;
@property (nonatomic) unsigned int syncItemType;
@property (nonatomic) unsigned int triggerPlay;
@property (nonatomic) unsigned int recallType;
@property (nonatomic) unsigned int tytReddotSubType;
@property (nonatomic) unsigned long long baseListenid;
@property (nonatomic) unsigned int listenidtype;
@property (retain, nonatomic) NSString *categoryId;
@property (nonatomic) unsigned long long singerFeedId;
@property (nonatomic) unsigned long long commentId;
@property (nonatomic) unsigned long long albumFeedId;
@property (nonatomic) unsigned int userOpType;
@property (retain, nonatomic) NSString *reddotUniqueId;
@property (nonatomic) unsigned int audioReddotStyleType;
@property (retain, nonatomic) NSString *clientReportBypassBuffer;
@property (nonatomic) unsigned int formerType;
@property (nonatomic) unsigned int titleLevel;

+ (void)initialize;

@end
