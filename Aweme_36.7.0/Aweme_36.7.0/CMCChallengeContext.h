@class AWETaskModel, AWEChallengeModel;

@interface CMCChallengeContext : CMCContext

@property (retain, nonatomic) AWEChallengeModel *challenge;
@property (retain, nonatomic) AWETaskModel *taskModel;
@property (nonatomic) BOOL isNational;

- (void).cxx_destruct;

@end
