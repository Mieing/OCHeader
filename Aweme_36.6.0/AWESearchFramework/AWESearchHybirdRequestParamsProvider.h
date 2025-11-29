@class NSString;

@interface AWESearchHybirdRequestParamsProvider : NSObject <AWESearchRequestParamsProviderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dependKeys;
+ (id)getParamsWithContext:(id)a0 dependKeys:(id)a1;
+ (id)provideKeys;
+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (Class)aAWEFeedModuleServiceDOUYINSSAdapterClass;
+ (Class)aAWESearchColdLaunchServiceDOUYINSSAdaperClass;
+ (id)latestPlayFinishedItemsString:(id)a0;
+ (id)latestUninterestedAwemesInfoWithContext:(id)a0;
+ (void)addDictionary:(id)a0 toClientExtra:(id)a1 args:(id)a2;
+ (void)addClientAIFeatureToParams:(id)a0 withContext:(id)a1;
+ (void)triggerRequestType;
+ (void)bindGuideDataToClientExtra:(id)a0 context:(id)a1;
+ (void)addBodyParamsForHistorySearchQuery:(id)a0;
+ (long long)searchAppDualLinesHistoryCnt;

- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (id)aAWEFeedModuleServiceDOUYINSSAdapter;
- (id)aAWESearchColdLaunchServiceDOUYINSSAdaper;

@end
