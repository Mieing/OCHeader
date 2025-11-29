@class NSString, NSMutableArray;

@interface GetAnchorSeasonPanelResponse_ScoreInfo : IESLivePBBaseMessage

@property (nonatomic) long long curScore;
@property (nonatomic) long long maxScore;
@property (retain, nonatomic) NSMutableArray *descArray;
@property (readonly, nonatomic) unsigned long long descArray_Count;
@property (retain, nonatomic) NSMutableArray *scoreHistoryArray;
@property (readonly, nonatomic) unsigned long long scoreHistoryArray_Count;
@property (copy, nonatomic) NSString *scoreFontColor;
@property (retain, nonatomic) NSMutableArray *progressGradientColorsArray;
@property (readonly, nonatomic) unsigned long long progressGradientColorsArray_Count;
@property (copy, nonatomic) NSString *curSoreStr;
@property (copy, nonatomic) NSString *maxScoreStr;

+ (id)descriptor;

@end
