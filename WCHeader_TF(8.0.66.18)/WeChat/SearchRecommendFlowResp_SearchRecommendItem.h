@class SearchRecommendFlowResp_FinderInfo, SearchRecommendFlowResp_LiteAppInfo, NSString;

@interface SearchRecommendFlowResp_SearchRecommendItem : WXPBGeneratedMessage

@property (retain, nonatomic) SearchRecommendFlowResp_FinderInfo *finderInfo;
@property (retain, nonatomic) SearchRecommendFlowResp_LiteAppInfo *liteAppInfo;
@property (nonatomic) unsigned int itemType;
@property (retain, nonatomic) NSString *tailText;
@property (retain, nonatomic) NSString *topText;
@property (retain, nonatomic) NSString *id;
@property (retain, nonatomic) NSString *extInfo;

+ (void)initialize;

@end
