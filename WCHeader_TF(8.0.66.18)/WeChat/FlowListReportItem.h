@class NSString;

@interface FlowListReportItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int pos;
@property (nonatomic) unsigned int actionType;
@property (retain, nonatomic) NSString *bizUsername;
@property (retain, nonatomic) NSString *articleUrl;
@property (nonatomic) unsigned int itemShowType;
@property (retain, nonatomic) NSString *feedId;
@property (nonatomic) unsigned int isRecommend;
@property (retain, nonatomic) NSString *recInfo;
@property (nonatomic) unsigned int isSubscribed;
@property (retain, nonatomic) NSString *extraData;

+ (void)initialize;

@end
