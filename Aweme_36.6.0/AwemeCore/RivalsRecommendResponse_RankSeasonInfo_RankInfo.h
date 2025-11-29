@class NSString, HTSLiveImage;

@interface RivalsRecommendResponse_RankSeasonInfo_RankInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *curRankDetail;
@property (retain, nonatomic) HTSLiveImage *rankBadge;
@property (nonatomic) BOOL hasRankBadge;
@property (copy, nonatomic) NSString *rankIndex;
@property (retain, nonatomic) HTSLiveImage *rankTagImg;
@property (nonatomic) BOOL hasRankTagImg;

+ (id)descriptor;

@end
