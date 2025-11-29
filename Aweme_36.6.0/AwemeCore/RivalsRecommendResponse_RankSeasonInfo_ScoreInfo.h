@class NSString, HTSLiveText;

@interface RivalsRecommendResponse_RankSeasonInfo_ScoreInfo : IESLivePBBaseMessage

@property (nonatomic) double progress;
@property (retain, nonatomic) HTSLiveText *desc;
@property (nonatomic) BOOL hasDesc;
@property (nonatomic) BOOL showProgress;
@property (copy, nonatomic) NSString *barColor;

+ (id)descriptor;

@end
