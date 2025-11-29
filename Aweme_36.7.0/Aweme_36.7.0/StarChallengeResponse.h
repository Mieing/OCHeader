@class StarChallengeResponse_Data;

@interface StarChallengeResponse : IESLivePBBaseMessage

@property (retain, nonatomic) StarChallengeResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
