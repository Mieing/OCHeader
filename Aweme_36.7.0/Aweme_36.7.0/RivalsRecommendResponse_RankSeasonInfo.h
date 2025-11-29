@class RivalsRecommendResponse_RankSeasonInfo_QualifyInfo, NSString, RivalsRecommendResponse_RankSeasonInfo_ScoreInfo, HTSLiveImage, RivalsRecommendResponse_RankSeasonInfo_RankInfo, RivalsRecommendResponse_RankSeasonInfo_Button;

@interface RivalsRecommendResponse_RankSeasonInfo : IESLivePBBaseMessage

@property (nonatomic) BOOL isUnlockedRank;
@property (retain, nonatomic) RivalsRecommendResponse_RankSeasonInfo_RankInfo *rankInfo;
@property (nonatomic) BOOL hasRankInfo;
@property (retain, nonatomic) RivalsRecommendResponse_RankSeasonInfo_QualifyInfo *qualifyInfo;
@property (nonatomic) BOOL hasQualifyInfo;
@property (copy, nonatomic) NSString *ruleScheme;
@property (nonatomic) int seasonStatus;
@property (retain, nonatomic) RivalsRecommendResponse_RankSeasonInfo_ScoreInfo *scoreInfo;
@property (nonatomic) BOOL hasScoreInfo;
@property (copy, nonatomic) NSString *buttonText;
@property (retain, nonatomic) HTSLiveImage *bgImg;
@property (nonatomic) BOOL hasBgImg;
@property (copy, nonatomic) NSString *detailScheme;
@property (copy, nonatomic) NSString *unlockedContent;
@property (nonatomic) BOOL enableSeasonTab;
@property (retain, nonatomic) RivalsRecommendResponse_RankSeasonInfo_Button *button;
@property (nonatomic) BOOL hasButton;

+ (id)descriptor;

@end
