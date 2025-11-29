@class StopAnchorChallengeResponse_Data;

@interface StopAnchorChallengeResponse : IESLivePBBaseMessage

@property (retain, nonatomic) StopAnchorChallengeResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
