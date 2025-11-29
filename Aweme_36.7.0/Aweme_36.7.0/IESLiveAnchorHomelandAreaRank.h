@class NSString, HTSLiveImage;

@interface IESLiveAnchorHomelandAreaRank : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *areaName;
@property (copy, nonatomic) NSString *areaNameColor;
@property (copy, nonatomic) NSString *rank;
@property (copy, nonatomic) NSString *rankColor;
@property (copy, nonatomic) NSString *backgroundColor;
@property (retain, nonatomic) HTSLiveImage *rankLeftImg;
@property (nonatomic) BOOL hasRankLeftImg;
@property (retain, nonatomic) HTSLiveImage *rankRightImg;
@property (nonatomic) BOOL hasRankRightImg;

+ (id)descriptor;

@end
