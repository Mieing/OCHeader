@class NSMutableSet;

@interface AWEMVChannelDataUtils : NSObject

@property (retain, nonatomic) NSMutableSet *itemIDs;
@property (retain, nonatomic) NSMutableSet *mixIDs;

+ (Class)aAWEPadBizUIAdapterClass;
+ (unsigned long long)convertToPullType:(id)a0;
+ (unsigned long long)convertRefreshType:(unsigned long long)a0;
+ (long long)requestCountWithFeedType:(unsigned long long)a0 fetchType:(unsigned long long)a1 requestNums:(long long)a2;
+ (unsigned long long)convertPullTypeByUsageType:(unsigned long long)a0;
+ (unsigned long long)convertPullTypeByRefreshType:(unsigned long long)a0;
+ (long long)padRequestCountV2;
+ (long long)padRequestCount;
+ (long long)padCardCountInOneScreen;
+ (long long)dcRequestCountWithFeedType:(unsigned long long)a0 dcRequestType:(unsigned long long)a1 requestNums:(long long)a2;
+ (id)sharedInstance;

- (id)aAWEPadBizUIAdapter;
- (void)removeRecordedItemID:(id)a0;
- (void)clearDeduplicateSet;
- (id)filterInvalidAwemeType:(id)a0 shouldSkipFilter:(id /* block */)a1 context:(id)a2;
- (id)filterDuplicateAwemeModels:(id)a0 shouldSkipFilter:(id /* block */)a1 context:(id)a2;
- (id)filterInvalidAwemeType:(id)a0 context:(id)a1;
- (id)filterDuplicateAwemeModels:(id)a0 context:(id)a1;
- (id)filterDuplicateMixModels:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end
