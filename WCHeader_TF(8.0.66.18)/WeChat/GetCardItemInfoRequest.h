@class BaseRequest, NSString, StatisticInfo;

@interface GetCardItemInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *cardId;
@property (nonatomic) unsigned int fromScene;
@property (retain, nonatomic) NSString *fromUsername;
@property (retain, nonatomic) NSString *cardExt;
@property (retain, nonatomic) NSString *jsCheckinfoUrl;
@property (retain, nonatomic) NSString *jsCheckinfoSessionUsername;
@property (nonatomic) unsigned int statisticScene;
@property (retain, nonatomic) NSString *consumedboxCardId;
@property (retain, nonatomic) StatisticInfo *statisticInfo;

+ (void)initialize;

@end
