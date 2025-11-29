@class NSString, NSDictionary, NSArray;

@interface AWESearchMiddlePageConfig : NSObject

@property (nonatomic) BOOL needGuessSearch;
@property (nonatomic) BOOL needHotList;
@property (nonatomic) BOOL needHistory;
@property (nonatomic) BOOL disableHistoryTag;
@property (nonatomic) BOOL cloaseGuessSearchEnabled;
@property (nonatomic) long long guessSearchWordsCount;
@property (copy, nonatomic) NSString *defaultPlaceHolderText;
@property (copy, nonatomic) NSDictionary *historyConfig;
@property (copy, nonatomic) NSDictionary *lynxInitConfig;
@property (copy, nonatomic) NSString *fromGroupId;
@property (copy, nonatomic) NSString *businessId;
@property (copy, nonatomic) NSString *btmPageIdentifier;
@property (copy, nonatomic) NSString *pd;
@property (copy, nonatomic) NSArray *extraSettingsArray;
@property (copy, nonatomic) NSDictionary *extraGuessSearchParams;
@property (copy, nonatomic) NSDictionary *extraPenetrateParams;
@property (copy, nonatomic) NSDictionary *extraHotListParams;
@property (copy, nonatomic) NSDictionary *extraHistoryParams;
@property (copy, nonatomic) NSDictionary *extraGlobalProps;
@property (copy, nonatomic) NSDictionary *extraBizGlobalProps;
@property (copy, nonatomic) NSDictionary *extraBizLogGlobalProps;
@property (nonatomic) BOOL needToSyncHistory;

- (void).cxx_destruct;

@end
