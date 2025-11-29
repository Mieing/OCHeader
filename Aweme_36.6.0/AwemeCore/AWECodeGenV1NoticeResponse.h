@class NSString, NSArray, AWECodeGenUrlModel, AWECodeGenExtraModel, AWECodeGenNoticeSettingsModel;

@interface AWECodeGenV1NoticeResponse : AWEBaseResponseModel

@property (nonatomic) long long hasMore;
@property (nonatomic) int total;
@property (nonatomic) long long maxTime;
@property (nonatomic) long long minTime;
@property (nonatomic) long long lastReadTime;
@property (nonatomic) long long vcdMergeTotal;
@property (copy, nonatomic) NSString *vcdToastText;
@property (copy, nonatomic) NSArray *noticeListV2ModelArray;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) AWECodeGenUrlModel *imageUrlModel;
@property (copy, nonatomic) NSArray *noticeTabModelArray;
@property (copy, nonatomic) NSArray *noticeDisturbModelArray;
@property (copy, nonatomic) NSArray *noticeConfigModelArray;
@property (copy, nonatomic) NSArray *noticeOptionModelArray;
@property (copy, nonatomic) NSArray *noticeSubscribeModelArray;
@property (copy, nonatomic) NSArray *noticeFoldModelArray;
@property (retain, nonatomic) AWECodeGenExtraModel *extraModel;
@property (nonatomic) int pinned;
@property (nonatomic) int disturb;
@property (nonatomic) int canDisturb;
@property (nonatomic) long long foldStatus;
@property (copy, nonatomic) NSArray *noticeSubCategoriesModelArray;
@property (nonatomic) long long hiddenTime;
@property (nonatomic) long long deletedTime;
@property (retain, nonatomic) AWECodeGenNoticeSettingsModel *noticeSettingsModel;
@property (copy, nonatomic) NSString *delNoticeToast;
@property (copy, nonatomic) NSArray *typeListModelArray;
@property (nonatomic) BOOL showSettingEntrance;
@property (copy, nonatomic) NSArray *singleNoticeTypesArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
