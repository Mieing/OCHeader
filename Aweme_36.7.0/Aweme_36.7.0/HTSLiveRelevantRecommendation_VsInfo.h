@class NSMutableArray;

@interface HTSLiveRelevantRecommendation_VsInfo : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *episodesArray;
@property (readonly, nonatomic) unsigned long long episodesArray_Count;

+ (id)descriptor;

- (id)episodesArray;

@end
