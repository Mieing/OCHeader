@class FeedFollowUpVisitData;

@interface FeedFollowUpVisitResponse : IESLivePBBaseMessage

@property (retain, nonatomic) FeedFollowUpVisitData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
