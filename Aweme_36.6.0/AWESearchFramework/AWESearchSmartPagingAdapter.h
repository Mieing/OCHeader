@class AWESearchSmartConfig, AWESearchSmartPagingServiceStorage, NSDictionary, NSString, AWESearchSmartFeatureConfig, AWESearchSmartPagingService;

@interface AWESearchSmartPagingAdapter : NSObject

@property (retain, nonatomic) AWESearchSmartPagingServiceStorage *storage;
@property (retain, nonatomic) AWESearchSmartPagingService *service;
@property (retain, nonatomic) AWESearchSmartConfig *config;
@property (retain, nonatomic) AWESearchSmartFeatureConfig *featureConfig;
@property (copy, nonatomic) NSDictionary *pagingServiceConfig;
@property (copy, nonatomic) NSString *channel;

+ (BOOL)enablePagingServiceWithChannel:(id)a0;
+ (void)sendTrackEventKey:(id)a0 andInfo:(id)a1;
+ (id)generateAdapterWithChanel:(id)a0;
+ (BOOL)disableSmartPaging;
+ (BOOL)enableAsyncStorage;
+ (id)buildFeatureConfigWith:(id)a0;
+ (id)fetchPagingServiceConfigWithChannel:(id)a0;
+ (id)fetchPagingServiceConfig;
+ (BOOL)disableAllSmartPaging;

- (BOOL)isStorageExpired;
- (id)fetchFeatures;
- (void)storeFeatures;
- (id)fetchFeatureStr;
- (double)fetchUpdateDuration;
- (id)parseFeatureInfo:(id)a0;
- (double)fetchStorageDuration;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isExpired;

@end
