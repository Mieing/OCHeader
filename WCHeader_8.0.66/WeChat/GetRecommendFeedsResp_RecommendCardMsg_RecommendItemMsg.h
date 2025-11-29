@class GetRecommendFeedsResp_RecommendCardMsg_RecommendItemMsg_BizAcctInfo, NSString, GetRecommendFeedsResp_RecommendCardMsg_RecommendTagMsg, GetRecommendFeedsResp_RecommendCardMsg_RecommendItemMsg_FinderMsg, GetRecommendFeedsResp_RecommendCardMsg_RecommendItemMsg_ItemMsg;

@interface GetRecommendFeedsResp_RecommendCardMsg_RecommendItemMsg : WXPBGeneratedMessage

@property (retain, nonatomic) GetRecommendFeedsResp_RecommendCardMsg_RecommendItemMsg_BizAcctInfo *bizInfo;
@property (retain, nonatomic) GetRecommendFeedsResp_RecommendCardMsg_RecommendItemMsg_ItemMsg *itemInfo;
@property (retain, nonatomic) NSString *recInfo;
@property (retain, nonatomic) NSString *aggregationTitle;
@property (retain, nonatomic) NSString *aggregationUrl;
@property (retain, nonatomic) NSString *recommendWording;
@property (nonatomic) unsigned int styleFlag;
@property (retain, nonatomic) GetRecommendFeedsResp_RecommendCardMsg_RecommendTagMsg *recommendTag;
@property (nonatomic) unsigned int iconType;
@property (retain, nonatomic) NSString *canvasBuffer;
@property (retain, nonatomic) GetRecommendFeedsResp_RecommendCardMsg_RecommendItemMsg_FinderMsg *finderInfo;

+ (void)initialize;

@end
