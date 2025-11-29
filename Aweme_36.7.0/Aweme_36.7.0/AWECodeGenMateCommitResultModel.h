@class NSString, AWECodeGenMateRelationModel;

@interface AWECodeGenMateCommitResultModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *userId;
@property (nonatomic) int success;
@property (retain, nonatomic) AWECodeGenMateRelationModel *mateInfoModel;
@property (nonatomic) long long followStatus;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
