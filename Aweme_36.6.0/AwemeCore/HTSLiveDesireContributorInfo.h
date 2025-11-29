@class NSString, NSMutableArray;

@interface HTSLiveDesireContributorInfo : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *contributorsArray;
@property (readonly, nonatomic) unsigned long long contributorsArray_Count;
@property (nonatomic) int contributorCount;
@property (nonatomic) long long currentCount;
@property (nonatomic) long long totalCount;
@property (nonatomic) int isShowProgress;
@property (nonatomic) float ratio;
@property (copy, nonatomic) NSString *currentCountYuanStr;

+ (id)descriptor;

@end
