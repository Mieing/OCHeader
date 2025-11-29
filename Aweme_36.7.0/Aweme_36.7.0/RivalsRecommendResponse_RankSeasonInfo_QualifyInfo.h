@class NSString, HTSLiveText;

@interface RivalsRecommendResponse_RankSeasonInfo_QualifyInfo : IESLivePBBaseMessage

@property (nonatomic) long long curCount;
@property (nonatomic) long long targetCount;
@property (retain, nonatomic) HTSLiveText *desc;
@property (nonatomic) BOOL hasDesc;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL showProgress;

+ (id)descriptor;

@end
