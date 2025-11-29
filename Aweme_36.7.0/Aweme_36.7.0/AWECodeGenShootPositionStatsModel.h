@interface AWECodeGenShootPositionStatsModel : AWEBaseDataModel

@property (nonatomic) BOOL isCollected;
@property (nonatomic) int collectCount;
@property (nonatomic) int postCount;
@property (nonatomic) int playCount;
@property (nonatomic) long long status;
@property (nonatomic) long long totalLikeCnt;
@property (nonatomic) BOOL isReviewing;

+ (id)JSONKeyPathsByPropertyKey;

@end
