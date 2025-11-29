@class NSString, NSMutableArray, RanklistWebcastHotResponse_Recommendation;

@interface RanklistWebcastHotResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *ranksArray;
@property (readonly, nonatomic) unsigned long long ranksArray_Count;
@property (nonatomic) long long updatedAt;
@property (copy, nonatomic) NSString *topImageURL;
@property (retain, nonatomic) RanklistWebcastHotResponse_Recommendation *topRecommendation;
@property (nonatomic) BOOL hasTopRecommendation;
@property (retain, nonatomic) RanklistWebcastHotResponse_Recommendation *commercialRecommendation;
@property (nonatomic) BOOL hasCommercialRecommendation;

+ (id)descriptor;

@end
