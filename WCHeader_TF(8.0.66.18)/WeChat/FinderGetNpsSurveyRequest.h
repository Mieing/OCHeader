@class BaseRequest, FinderBaseRequest, NpsSurveySupportInfo;

@interface FinderGetNpsSurveyRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long taskId;
@property (retain, nonatomic) NpsSurveySupportInfo *supportInfo;

+ (void)initialize;

@end
