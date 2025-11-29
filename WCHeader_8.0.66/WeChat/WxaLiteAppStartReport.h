@class NSString;

@interface WxaLiteAppStartReport : NSObject

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSString *page;
@property (nonatomic) BOOL isEnable;
@property (nonatomic) BOOL isInitialized;
@property (nonatomic) long long startTime;
@property (nonatomic) BOOL isSyncStart;
@property (nonatomic) long long checkStartTime;
@property (nonatomic) long long checkCost;
@property (nonatomic) BOOL checkResult;
@property (nonatomic) BOOL isPreloadEngine;
@property (nonatomic) long long loadEngineStartTime;
@property (nonatomic) long long loadEngineCost;
@property (nonatomic) BOOL isPreloadBaseLib;
@property (nonatomic) long long preloadBaseLibStartTime;
@property (nonatomic) long long preloadBaseLibCost;
@property (nonatomic) BOOL isPreloadPage;
@property (nonatomic) long long preloadPageStartTime;
@property (nonatomic) long long preloadPageCost;
@property (nonatomic) long long showPageStartTime;
@property (nonatomic) long long showPageCost;
@property (nonatomic) int showPageResult;
@property (nonatomic) long long appCost;
@property (nonatomic) long long renderPageCost;
@property (nonatomic) BOOL codeCacheSwitch;
@property (nonatomic) int codeCacheResult;
@property (nonatomic) long long evalBaseLibCost;
@property (nonatomic) long long evalPageCost;
@property (nonatomic) BOOL hitSnapshotSwitch;
@property (nonatomic) int snapshotRuntimeType;

- (id)init;
- (id)toJsonString;
- (void).cxx_destruct;

@end
