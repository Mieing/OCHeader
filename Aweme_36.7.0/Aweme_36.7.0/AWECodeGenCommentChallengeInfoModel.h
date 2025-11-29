@class NSString;

@interface AWECodeGenCommentChallengeInfoModel : AWEBaseDataModel

@property (nonatomic) long long challengeId;
@property (copy, nonatomic) NSString *challengeName;
@property (nonatomic) long long discussingCount;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
