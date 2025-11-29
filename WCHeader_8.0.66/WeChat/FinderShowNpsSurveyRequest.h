@class BaseRequest, FinderBaseRequest;

@interface FinderShowNpsSurveyRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long taskId;
@property (nonatomic) unsigned long long surveyId;

+ (void)initialize;

@end
