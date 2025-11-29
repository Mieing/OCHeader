@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderLiveQuestActivityClickReportRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *activityId;
@property (nonatomic) unsigned int clickTimes;

+ (void)initialize;

@end
