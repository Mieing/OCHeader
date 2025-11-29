@class GetSelectedChallengeListResponse_Data;

@interface GetSelectedChallengeListResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetSelectedChallengeListResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
