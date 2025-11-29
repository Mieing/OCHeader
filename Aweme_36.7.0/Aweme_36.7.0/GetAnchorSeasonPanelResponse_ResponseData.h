@class GetAnchorSeasonPanelResponse_OperationInfo, GetAnchorSeasonPanelResponse_Button, GetAnchorSeasonPanelResponse_RankInfo, GetAnchorSeasonPanelResponse_ScoreInfo, HTSLiveImage, NSMutableArray, GetAnchorSeasonPanelResponse_PeakCardInfo;

@interface GetAnchorSeasonPanelResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) GetAnchorSeasonPanelResponse_RankInfo *rankInfo;
@property (nonatomic) BOOL hasRankInfo;
@property (retain, nonatomic) GetAnchorSeasonPanelResponse_ScoreInfo *scoreInfo;
@property (nonatomic) BOOL hasScoreInfo;
@property (retain, nonatomic) NSMutableArray *ruleInfoArray;
@property (readonly, nonatomic) unsigned long long ruleInfoArray_Count;
@property (retain, nonatomic) NSMutableArray *rankHistoryArray;
@property (readonly, nonatomic) unsigned long long rankHistoryArray_Count;
@property (retain, nonatomic) NSMutableArray *taskInfoArray;
@property (readonly, nonatomic) unsigned long long taskInfoArray_Count;
@property (retain, nonatomic) HTSLiveImage *bgImg;
@property (nonatomic) BOOL hasBgImg;
@property (retain, nonatomic) GetAnchorSeasonPanelResponse_OperationInfo *operationInfo;
@property (nonatomic) BOOL hasOperationInfo;
@property (nonatomic) BOOL isShowRank;
@property (retain, nonatomic) GetAnchorSeasonPanelResponse_PeakCardInfo *peakCardInfo;
@property (nonatomic) BOOL hasPeakCardInfo;
@property (retain, nonatomic) GetAnchorSeasonPanelResponse_Button *button;
@property (nonatomic) BOOL hasButton;

+ (id)descriptor;

@end
