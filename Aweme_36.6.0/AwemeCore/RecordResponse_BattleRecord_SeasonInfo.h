@class NSString, HTSLiveImage;

@interface RecordResponse_BattleRecord_SeasonInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *curRankDetail;
@property (retain, nonatomic) HTSLiveImage *rankBadge;
@property (nonatomic) BOOL hasRankBadge;
@property (copy, nonatomic) NSString *deltaDetailScheme;

+ (id)descriptor;

@end
