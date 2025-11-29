@class NSString, NSDictionary, AWESearchAIGCResultRouterParams, AWESearchAIGCResultRouterSearchTask;

@interface AWESearchAIGCRequestParamsContext : AWESearchVerticalRequestParamsBaseContext

@property (copy, nonatomic) NSString *backtrace;
@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) double imageWidth;
@property (nonatomic) double imageHeight;
@property (copy, nonatomic) NSString *tosid;
@property (copy, nonatomic) NSString *regenerateInfo;
@property (retain, nonatomic) NSDictionary *appendRefreshParams;
@property (retain, nonatomic) AWESearchAIGCResultRouterParams *routerParams;
@property (retain, nonatomic) AWESearchAIGCResultRouterSearchTask *routerSearchTask;
@property (copy, nonatomic) NSString *searchUniqueID;
@property (nonatomic) BOOL needFollowUpInputCopilot;
@property (nonatomic) BOOL enableAiSearchDoubleColumn;
@property (nonatomic) BOOL enableAiSearchCopilotV2;

- (void).cxx_destruct;

@end
