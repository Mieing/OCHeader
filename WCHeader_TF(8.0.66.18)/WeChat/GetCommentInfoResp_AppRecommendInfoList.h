@class GetCommentInfoResp_TagSummary, NSMutableArray, GetCommentInfoResp_AppRecommendDishInfo;

@interface GetCommentInfoResp_AppRecommendInfoList : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *info;
@property (retain, nonatomic) GetCommentInfoResp_TagSummary *tagSummary;
@property (nonatomic) unsigned long long dataVersion;
@property (retain, nonatomic) GetCommentInfoResp_AppRecommendDishInfo *dishInfo;

+ (void)initialize;

@end
