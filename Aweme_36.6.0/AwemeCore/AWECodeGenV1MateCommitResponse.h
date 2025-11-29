@class AWECodeGenMateRelationModel;

@interface AWECodeGenV1MateCommitResponse : AWEBaseResponseModel

@property (retain, nonatomic) AWECodeGenMateRelationModel *mateInfoModel;
@property (nonatomic) long long followStatus;
@property (nonatomic) int followerStatus;
@property (nonatomic) int followerRequestStatus;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
