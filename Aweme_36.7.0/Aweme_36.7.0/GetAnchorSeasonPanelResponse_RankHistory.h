@class NSString, HTSLiveImage;

@interface GetAnchorSeasonPanelResponse_RankHistory : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *rankBadge;
@property (nonatomic) BOOL hasRankBadge;
@property (copy, nonatomic) NSString *rankDetail;
@property (copy, nonatomic) NSString *seasonName;
@property (nonatomic) BOOL isSeasonV2;

+ (id)descriptor;

@end
