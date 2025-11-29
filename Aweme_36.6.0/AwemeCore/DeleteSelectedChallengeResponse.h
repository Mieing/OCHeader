@class DeleteSelectedChallengeResponse_Data;

@interface DeleteSelectedChallengeResponse : IESLivePBBaseMessage

@property (retain, nonatomic) DeleteSelectedChallengeResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
