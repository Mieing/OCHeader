@class NSString, NSDictionary, NSArray, IESECListKitDynamicModel, IESECListKitListModel;

@interface IESECMallModel : NSObject

@property (retain, nonatomic) IESECListKitListModel *listModel;
@property (nonatomic) long long lastTabId;
@property (nonatomic) unsigned long long pageNum;
@property (nonatomic) unsigned long long prePageNum;
@property (nonatomic) long long refreshCount;
@property (nonatomic) long long loadMoreCount;
@property (nonatomic) long long cursor;
@property (nonatomic) long long tabId;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL isNativeFullTab;
@property (nonatomic) BOOL nativefullTabBigFontEnabled;
@property (nonatomic) BOOL forbidFirstScreenStraightOut;
@property (nonatomic) BOOL delayFirstScreenStraightOut;
@property (nonatomic) BOOL cacheRefreshDataAfterReceive;
@property (nonatomic) BOOL disableFirstScreenStraightOutAfterReceive;
@property (nonatomic) BOOL openSaveStraightOutData;
@property (nonatomic) BOOL firstScreenStraightOutIdentityIsTabs;
@property (nonatomic) BOOL enableSyncStraightOut;
@property (nonatomic) BOOL hasRefreshData;
@property (nonatomic) BOOL hasPreDomainConnect;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *enterForm;
@property (copy, nonatomic) NSString *lastActions;
@property (copy, nonatomic) NSString *postBack;
@property (copy, nonatomic) NSString *userBehaviorStr;
@property (copy, nonatomic) NSString *apiConfigKey;
@property (copy, nonatomic) NSString *environmentID;
@property (copy, nonatomic) NSString *firstScreenStraightOutIdentity;
@property (copy, nonatomic) NSDictionary *currentRouterParams;
@property (copy, nonatomic) NSDictionary *filterInfo;
@property (copy, nonatomic) NSDictionary *globalProps;
@property (copy, nonatomic) NSDictionary *rootGlobalProps;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) NSDictionary *bizIdentityDict;
@property (copy, nonatomic) NSArray *feedback;
@property (copy, nonatomic) NSArray *filters;
@property (copy, nonatomic) NSArray *impressions;
@property (copy, nonatomic) NSArray *mallRequestFilterParams;
@property (copy, nonatomic) NSArray *mallRequestFilterBesidesEnterMethod;
@property (nonatomic) long long nextPageCount;
@property (retain, nonatomic) IESECListKitDynamicModel *dynamicModel;

+ (id)copyListKitListModel:(id)a0;

- (void).cxx_destruct;

@end
