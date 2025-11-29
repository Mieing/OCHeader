@class NSMutableArray, HTSLiveImage;

@interface RivalsRecommendResponse_RankSeasonInfo_Button_Tip : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *descArray;
@property (readonly, nonatomic) unsigned long long descArray_Count;
@property (retain, nonatomic) HTSLiveImage *bgImg;
@property (nonatomic) BOOL hasBgImg;

+ (id)descriptor;

@end
