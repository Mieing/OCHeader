@class AWECommentSurpriseEggModel, AWECommentReportInfo, AWECommentFunctionNoticeModel, AWECommentTopTipsInfo, AWEGeneralCommentConfigModel, AWECommentTipsModel, NSString, AWECommentRiskConfigModel, AWECommentZeroPanelInfo, AWECommentFeedStrategyModel, AWECommentSummaryTipsModel, AWECodeGenCommentTranslateConfigModel, NSArray, AWECommentMentionLynxEggModel, NSNumber, AWECommentUserAvatarSchema, AWECommentReviewStatusModel;

@interface AWECommentResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *commentArray;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *foldedCommentsCount;
@property (retain, nonatomic) NSNumber *total;
@property (nonatomic) BOOL needFixTotalCount;
@property (nonatomic) long long replyStyle;
@property (copy, nonatomic) NSString *insertedIDs;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) BOOL isAffinity;
@property (nonatomic) BOOL shouldShowMutualFriendCommentDesc;
@property (retain, nonatomic) AWECommentReviewStatusModel *reviewStatus;
@property (retain, nonatomic) AWECommentSurpriseEggModel *commentEgg;
@property (nonatomic) BOOL hasSliceData;
@property (nonatomic) BOOL showManageRedPoint;
@property (copy, nonatomic) NSString *commentCommonData;
@property (copy, nonatomic) NSString *hotsoonText;
@property (nonatomic) long long hotsoonFilterCount;
@property (nonatomic) long long hotsoonHasMore;
@property (retain, nonatomic) AWECommentTipsModel *commentTips;
@property (copy, nonatomic) NSString *xiguaText;
@property (nonatomic) long long publishGuideType;
@property (copy, nonatomic) NSString *guideFooterText;
@property (retain, nonatomic) AWECommentRiskConfigModel *commentRiskConfig;
@property (retain, nonatomic) AWECommentFunctionNoticeModel *functionNoticeModel;
@property (retain, nonatomic) AWECommentReportInfo *reportInfo;
@property (retain, nonatomic) AWECommentZeroPanelInfo *zeroPanelInfo;
@property (retain, nonatomic) AWEGeneralCommentConfigModel *generalCommentConfig;
@property (retain, nonatomic) AWECommentMentionLynxEggModel *commentMentionLynxEgg;
@property (retain, nonatomic) AWECommentFeedStrategyModel *commentFeedStategy;
@property (retain, nonatomic) AWECommentUserAvatarSchema *userAvatarSchema;
@property (retain, nonatomic) AWECommentTopTipsInfo *commentTopTipsInfo;
@property (retain, nonatomic) AWECommentSummaryTipsModel *commentSummaryTipsModel;
@property (retain, nonatomic) AWECodeGenCommentTranslateConfigModel *translateConfigModel;

+ (id)hasMoreJSONTransformer;
+ (id)generalCommentConfigJSONTransformer;
+ (id)commentMentionLynxEggJSONTransformer;
+ (id)reportInfoJSONTransformer;
+ (id)zeroPanelInfoJSONTransformer;
+ (id)commentFeedStategyJSONTransformer;
+ (id)commentRiskConfigJSONTransformer;
+ (id)functionNoticeModelJSONTransformer;
+ (id)fastResponseJSONTransformer;
+ (id)commentTipsJSONTransformer;
+ (id)commentEggJSONTransformer;
+ (id)reviewStatusJSONTransformer;
+ (id)userAvatarSchemaJSONTransformer;
+ (id)commentTopTipsInfoJSONTransformer;
+ (id)commentSummaryTipsModelJSONTransformer;
+ (id)commentArrayJSONTransformer;
+ (id)replyStyleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)reconstructAvatarURL;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
