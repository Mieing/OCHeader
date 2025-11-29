@class BaseRequest, NSString, StatisticInfo;

@interface AcceptCardItemRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *fromUsername;
@property (nonatomic) unsigned int fromScene;
@property (retain, nonatomic) NSString *cardId;
@property (retain, nonatomic) NSString *cardExt;
@property (retain, nonatomic) NSString *jsCheckinfoUrl;
@property (retain, nonatomic) NSString *jsCheckinfoSessionUsername;
@property (nonatomic) unsigned int statisticScene;
@property (nonatomic) unsigned int isFollowService;
@property (retain, nonatomic) StatisticInfo *statisticInfo;

+ (void)initialize;

@end
