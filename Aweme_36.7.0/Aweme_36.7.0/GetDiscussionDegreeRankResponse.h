@class GetDiscussionDegreeRankResponse_Data;

@interface GetDiscussionDegreeRankResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetDiscussionDegreeRankResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
