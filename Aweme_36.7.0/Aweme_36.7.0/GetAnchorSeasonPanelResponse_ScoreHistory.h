@class NSString;

@interface GetAnchorSeasonPanelResponse_ScoreHistory : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *itemName;
@property (copy, nonatomic) NSString *deltaScore;

+ (id)descriptor;

@end
