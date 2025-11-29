@class NSString;

@interface QueryCoinTaskMissionResponse_AwardNode : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *award;
@property (copy, nonatomic) NSString *bonus;
@property (nonatomic) BOOL received;
@property (copy, nonatomic) NSString *nodeId;

+ (id)descriptor;

@end
