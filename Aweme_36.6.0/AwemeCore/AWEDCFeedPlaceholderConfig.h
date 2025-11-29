@class NSArray, NSString, NSNumber;

@interface AWEDCFeedPlaceholderConfig : AWEDCFeedBaseConfig

@property (nonatomic) BOOL enable;
@property (nonatomic) unsigned long long strategyType;
@property (nonatomic) long long cacheCount;
@property (nonatomic) long long enableUserAvatarCache;
@property (nonatomic) unsigned long long dataProcessType;
@property (nonatomic) long long validCacheCount;
@property (nonatomic) BOOL cacheDistinguishUser;
@property (nonatomic) BOOL cacheWhenNotLogin;
@property (copy, nonatomic) NSArray *filterAwemeType;
@property (copy, nonatomic) id /* block */ judgeItemAllowCacheBlock;
@property (copy, nonatomic) id /* block */ onCacheModelsWillStoreBlock;
@property (retain, nonatomic) NSString *businessID;
@property (nonatomic) BOOL loadCacheAtMainThread;
@property (copy, nonatomic) id /* block */ historyCacheModelsArraySyncBlock;
@property (copy, nonatomic) id /* block */ historyCacheModelsArrayAsyncBlock;
@property (copy, nonatomic) id /* block */ onCacheModelsWillLoadBlock;
@property (copy, nonatomic) id /* block */ onCacheModelsDidLoadBlock;
@property (nonatomic) unsigned long long cachePlaceholderScene;
@property (copy, nonatomic) id /* block */ currentSectionViewModelsArrayEnableShowPlaceholderBlock;
@property (copy, nonatomic) id /* block */ customLoadPlaceholderDataBlock;
@property (nonatomic) BOOL enable7DayInvalid;
@property (nonatomic) BOOL enableUnusedModelPriority;
@property (copy, nonatomic) NSNumber *reserveModelCountAfterFirstFetch;
@property (nonatomic) long long diskSizeLimit;

- (void)setupDefaultConfig;
- (void).cxx_destruct;

@end
