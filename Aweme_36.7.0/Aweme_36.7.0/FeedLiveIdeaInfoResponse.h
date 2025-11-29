@class FeedLiveIdeaInfoResponse_Data;

@interface FeedLiveIdeaInfoResponse : IESLivePBBaseMessage

@property (retain, nonatomic) FeedLiveIdeaInfoResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
