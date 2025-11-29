@class NSArray, NSString, IESIMURLModel, NSMutableArray, AWEIMNotificationnNoticeSettingsModel;

@interface AWEIMNotificationResponseModelNew : IESIMBaseApiModel

@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL needAsync;
@property (nonatomic) long long total;
@property (retain, nonatomic) NSMutableArray *noticeList;
@property (copy, nonatomic) NSArray *foldGroupList;
@property (nonatomic) long long maxTime;
@property (nonatomic) long long minTime;
@property (nonatomic) long long lastReadTime;
@property (nonatomic) long long group;
@property (nonatomic) long long vcdMergeTotal;
@property (copy, nonatomic) NSString *vcdToastText;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL isFoldable;
@property (retain, nonatomic) IESIMURLModel *imageUrl;
@property (copy, nonatomic) NSString *labelText;
@property (copy, nonatomic) NSString *jumpSchema;
@property (copy, nonatomic) NSArray *noticeTabs;
@property (copy, nonatomic) NSArray *noticeDisturbs;
@property (copy, nonatomic) NSArray *noticeSubscribes;
@property (copy, nonatomic) NSArray *noticeConfigs;
@property (copy, nonatomic) NSArray *subsets;
@property (nonatomic) long long scene;
@property (copy, nonatomic) NSArray *noticeSubCategories;
@property (copy, nonatomic) NSArray *noticeTypeList;
@property (nonatomic) BOOL canShowSettingEntrance;
@property (nonatomic) long long groupType;
@property (copy, nonatomic) NSString *delNoticeText;
@property (retain, nonatomic) AWEIMNotificationnNoticeSettingsModel *noticeSettings;
@property (nonatomic) BOOL pinned;
@property (nonatomic) BOOL canDisturb;
@property (nonatomic) BOOL disturb;
@property (nonatomic) BOOL foldStatus;
@property (nonatomic) long long deleteTime;
@property (nonatomic) long long hiddenTime;

+ (id)imageUrlJSONTransformer;
+ (id)hasMoreJSONTransformer;
+ (id)noticeListJSONTransformer;
+ (id)foldGroupListJSONTransformer;
+ (id)noticeSubCategoriesJSONTransformer;
+ (id)noticeTabsJSONTransformer;
+ (id)noticeConfigsJSONTransformer;
+ (id)noticeDisturbsJSONTransformer;
+ (id)noticeSubscribesJSONTransformer;
+ (id)subsetsJSONTransformer;
+ (id)noticeTypeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
