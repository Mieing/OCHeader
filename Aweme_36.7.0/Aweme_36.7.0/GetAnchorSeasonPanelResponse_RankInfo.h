@class NSString, HTSLiveImage, NSMutableArray;

@interface GetAnchorSeasonPanelResponse_RankInfo : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *starImg;
@property (nonatomic) BOOL hasStarImg;
@property (copy, nonatomic) NSString *rankName;
@property (copy, nonatomic) NSString *starCount;
@property (retain, nonatomic) NSMutableArray *bgGradientColorsArray;
@property (readonly, nonatomic) unsigned long long bgGradientColorsArray_Count;
@property (retain, nonatomic) HTSLiveImage *tagImg;
@property (nonatomic) BOOL hasTagImg;
@property (nonatomic) int rankLevel;

+ (id)descriptor;

@end
