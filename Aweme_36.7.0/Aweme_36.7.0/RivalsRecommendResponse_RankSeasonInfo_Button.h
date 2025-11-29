@class NSString, RivalsRecommendResponse_RankSeasonInfo_Button_Tip;

@interface RivalsRecommendResponse_RankSeasonInfo_Button : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) RivalsRecommendResponse_RankSeasonInfo_Button_Tip *tip;
@property (nonatomic) BOOL hasTip;

+ (id)descriptor;

@end
