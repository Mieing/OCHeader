@class NSString, NSDictionary, AWESearchAIGCImageInfo, AWESearchAIGCVideoInfo;

@interface AWESearchAIGCResultRouterParams : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSString *enterFrom;
@property (readonly, copy, nonatomic) NSString *enterFromSecond;
@property (readonly, copy, nonatomic) NSString *enterMethod;
@property (readonly, copy, nonatomic) NSString *aiPageType;
@property (readonly, copy, nonatomic) NSString *groupID;
@property (readonly, copy, nonatomic) NSString *searchKeyword;
@property (readonly, copy, nonatomic) NSString *preSearchID;
@property (readonly, copy, nonatomic) NSString *clientServerExtra;
@property (readonly, copy, nonatomic) NSString *requestParamsExtra;
@property (readonly, copy, nonatomic) NSString *transitionType;
@property (readonly, copy, nonatomic) NSString *inputKeyword;
@property (readonly, copy, nonatomic) NSString *searchMaskString;
@property (readonly, copy, nonatomic) NSString *luckyTaskAction;
@property (readonly, copy, nonatomic) NSString *showVoiceMiddlePage;
@property (readonly, copy, nonatomic) NSString *enterFromAICard;
@property (readonly, nonatomic) AWESearchAIGCVideoInfo *videoInfo;
@property (readonly, nonatomic) AWESearchAIGCImageInfo *imageInfo;
@property (readonly, nonatomic) BOOL videoHasSummary;
@property (readonly, nonatomic) BOOL shouldShowGuessSearchCard;
@property (readonly, copy, nonatomic) NSString *videoAuthorAvatarURL;
@property (readonly, copy, nonatomic) NSString *videoAuthorAvatarName;
@property (readonly, copy, nonatomic) NSString *videoAuthorUserId;
@property (readonly, copy, nonatomic) NSString *enterType;
@property (readonly, nonatomic) unsigned long long strategyMode;
@property (readonly, nonatomic) unsigned long long shownType;
@property (readonly, copy, nonatomic) NSString *inputMode;
@property (readonly, copy, nonatomic) NSString *autoOpenKeyboard;
@property (readonly, copy, nonatomic) NSString *voiceGuide;
@property (readonly, copy, nonatomic) NSString *isNewLogin;
@property (readonly, copy, nonatomic) NSString *searchUniqueID;
@property (readonly, copy, nonatomic) NSString *extraLogParams;
@property (readonly, nonatomic) BOOL feedRsUseStudyApi;
@property (readonly, copy, nonatomic) NSString *aigcCardContentID;
@property (readonly, copy, nonatomic) NSString *searchDedupKey;
@property (readonly, copy, nonatomic) NSString *deepThinkSelected;
@property (readonly, copy, nonatomic) NSString *deepThinkMode;
@property (readonly, copy, nonatomic) NSString *conversationThinkMode;
@property (readonly, copy, nonatomic) NSString *sevenSplitQueryHideImage;
@property (readonly, copy, nonatomic) NSString *sevenSplitVerticalSlideBack;
@property (readonly, nonatomic) BOOL enableAINote;
@property (nonatomic) BOOL inputKeywordUsedFlag;
@property (retain, nonatomic) NSDictionary *originParams;
@property (copy, nonatomic) NSString *firstGetHistoryScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)videoInfoJSONTransformer;
+ (id)imageInfoJSONTransformer;
+ (id)feedRsUseStudyApiJSONTransformer;
+ (id)videoHasSummaryJSONTransformer;
+ (id)shouldShowGuessSearchCardJSONTransformer;
+ (id)needGetHistoryUseWriteJSONTransformer;
+ (id)strategyModeJSONTransformer;
+ (id)shownTypeJSONTransformer;
+ (id)enableAINoteJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)routerTrackInfo;
- (id)safeEnterMethod;
- (void).cxx_destruct;

@end
