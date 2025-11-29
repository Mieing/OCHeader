@class BaseRequest, NSMutableArray;

@interface ReportRecommendedMusicFeedbackRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long requestId;
@property (retain, nonatomic) NSMutableArray *feedbacks;
@property (nonatomic) unsigned long long bussId;

+ (void)initialize;

@end
