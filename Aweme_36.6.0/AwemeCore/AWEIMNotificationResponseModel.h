@class AWEIMNotificationResponseExtraModel, NSArray, NSString, AWEIMNotificationnNoticeSettingsModel;

@interface AWEIMNotificationResponseModel : AWEBaseApiModel

@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long total;
@property (copy, nonatomic) NSArray *noticeArray;
@property (nonatomic) long long maxTime;
@property (nonatomic) long long minTime;
@property (nonatomic) long long lastReadTime;
@property (nonatomic) long long group;
@property (nonatomic) long long vcdMergeTotal;
@property (copy, nonatomic) NSString *vcdToastText;
@property (copy, nonatomic) NSString *delNoticeToast;
@property (retain, nonatomic) AWEIMNotificationnNoticeSettingsModel *noticeSettings;
@property (retain, nonatomic) AWEIMNotificationResponseExtraModel *extra;
@property (copy, nonatomic) NSArray *noticeSubCategories;

+ (id)extraJSONTransformer;
+ (id)hasMoreJSONTransformer;
+ (id)noticeArrayJSONTransformer;
+ (id)noticeSubCategoriesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithOwnPostedCommentResponse:(id)a0;
- (id)initWithOwnPostedDanmakuResponse:(id)a0;
- (void).cxx_destruct;

@end
